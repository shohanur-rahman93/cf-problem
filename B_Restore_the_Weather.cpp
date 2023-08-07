#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void assignTemperatures(vector<int>& a, const vector<int>& b, int k) {
    unordered_map<int, int> mapping;

    for (int i = 0; i < a.size(); i++) {
        mapping[a[i]] = i;
    }

    for (int i = 0; i < b.size(); i++) {
        int target = b[i];
        if (mapping.count(target - k) > 0) {
            a[i] = target - k;
            mapping.erase(target - k);
        } else {
            auto it = mapping.begin();
            a[i] = it->first;
            mapping.erase(it);
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        assignTemperatures(a, b, k);

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
