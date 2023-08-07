#include <bits/stdc++.h>
using namespace std;

const int MAXN = 30010;

int T, n, k;
int cnt[MAXN][MAXN];

int main() {
    scanf("%d", &T);
    for (int tc = 1; tc <= T; ++tc) {
        memset(cnt, 0, sizeof(cnt));
        scanf("%d%d", &n, &k);
        for (int i = 0; i < n; ++i) {
            int x1, y1, x2, y2;
            scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
            cnt[x1][y1]++;
            cnt[x2][y2]++;
            cnt[x1][y2]--;
            cnt[x2][y1]--;
        }
        for (int i = 0; i <= 1000000000; ++i) {
            for (int j = 1; j <= 1000000000; ++j) {
                cnt[i][j] += cnt[i][j - 1];
            }
        }
        for (int j = 0; j <= 1000000000; ++j) {
            for (int i = 1; i <= 1000000000; ++i) {
                cnt[i][j] += cnt[i - 1][j];
            }
        }
        int ans = 0;
        for (int i = 0; i <= 1000000000; ++i) {
            for (int j = 0; j <= 1000000000; ++j) {
                if (cnt[i][j] >= k) {
                    ans++;
                }
            }
        }
        printf("Case %d: %d\n", tc, ans);
    }
    return 0;
}
