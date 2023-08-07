#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main()
{
    fast int t;
    cin >> t;
    int cas = 0;
    while (t--)
    {
        cas++;
        string s;
        cin >> s;
        string r = s;
        reverse(r.begin(), r.end());
        int n = s.length();
        int dp[n + 1][n + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0 or j == 0)
                    dp[i][j] = 0;
                else if (s[i - 1] == r[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        cout << "Case " << cas << ": " << n - dp[n][n] << "\n";
    }
    return 0;
}
