#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool dfs(int node, vector<vector<int>>& graph, unordered_map<int, int>& distance) {
    if (distance.count(node)) return true;

    for (int neighbor : graph[node]) {
        if (distance.count(neighbor) && distance[neighbor] != distance[node] + 1)
            return false;

        distance[neighbor] = distance[node] + 1;
        if (!dfs(neighbor, graph, distance))
            return false;
    }
    return true;
}

bool isPartitionPossible(int n, int m, vector<vector<int>>& conditions) {
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int ai = conditions[i][0];
        int bi = conditions[i][1];
        int di = conditions[i][2];

        if (di > 0) graph[ai].push_back(bi);
        else graph[bi].push_back(ai);
    }

    for (int i = 1; i <= n; i++) {
        unordered_map<int, int> distance;
        if (!dfs(i, graph, distance))
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> conditions(m, vector<int>(3));
        for (int i = 0; i < m; i++) {
            cin >> conditions[i][0] >> conditions[i][1] >> conditions[i][2];
        }

        if (isPartitionPossible(n, m, conditions))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
