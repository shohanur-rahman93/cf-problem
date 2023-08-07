#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0, cnt_lies = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            sum += x;
            cnt_lies += (x == 0);
        }
        if (cnt_lies == 0) {
            cout << "0\n";
            continue;
        }
        if (cnt_lies == n) {
            cout << n << "\n";
            continue;
        }
        if (sum < cnt_lies) {
            cout << "-1\n";
            continue;
        }
        cout << cnt_lies << "\n";
    }
    return 0;
}
