#include <bits/stdc++.h>
using namespace std;
long long min(long long a, long long b)
{
    if (a > b)
        return b;
    else
        return a;
}
long long max(long long a, long long b)
{
    if (a < b)
        return b;
    else
        return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        long long ans = 1e18;
        long long A = a, B = b;
        // 为防止出现负数，在输出时做一下特判即可。
        // n种情况
        for (int i = 0; i <= n; i++)
        {
            long long aa = max(A - n, x); // a最小值
            long long bb = max(B - i, y); // b最小值
            if (aa > bb)
                swap(aa, bb), swap(A, B); // 保证aa<=bb
            long long temp = aa * B;      // 更新ans
            temp = min(temp, (A - i) * bb);
            ans = min(ans, temp);
        }
        cout << ans << endl;
    }
    return 0;
}
