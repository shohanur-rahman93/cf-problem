#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int len = r - l + 1;
            int odd = len % 2;
            int even = len - odd;
            if (odd && k % 2 == 1) {
                cout << "YES\n";
            } else if (even && k % 2 == 1 && sum % 2 == 1) {
                cout << "YES\n";
            } else if (even && k % 2 == 0 && sum % 2 == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
