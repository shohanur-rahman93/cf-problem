#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> colors(n);
    for (int i = 0; i < n; i++) {
        cin >> colors[i].first >> colors[i].second;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (colors[i].second == colors[j].first) {
                    ans++;
                }
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
