#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int ans_x = -1, ans_y = -1;
        for (int d = 1; d*d <= n; d++) {
            if (n % d == 0) {
                int m = n / d;
                for (int sign : {1, -1}) {
                    int num = d * sign + m;
                    int den = d * m;
                    if (den == 0 || num % den != 0) continue;
                    int y = num / den;
                    int x = d - y;
                    if (x >= 1 && x <= n && y >= 1 && y <= n && x*y*(x+y) == n) {
                        ans_x = x;
                        ans_y = y;
                        break;
                    }
                }
            }
            if (ans_x != -1) break;
        }

        if (ans_x != -1) {
            cout << ans_x << " " << ans_y << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
