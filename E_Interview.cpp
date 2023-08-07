#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int t, n, a[MAXN];

int ask(int k, vector<int> piles) {
    cout << "? " << k;
    for (int i = 0; i < k; i++) cout << ' ' << piles[i];
    cout << endl;
    fflush(stdout);
    int res;
    cin >> res;
    return res;
}

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int lo = 1, hi = n;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (ask(mid, vector<int>(a+1, a+n+1)) % 2 == 0) {
            lo = mid+1;
        } else {
            hi = mid;
        }
    }
    cout << "! " << lo << endl;
    fflush(stdout);
}

int main() {
    cin >> t;
    while (t--) solve();
    return 0;
}
