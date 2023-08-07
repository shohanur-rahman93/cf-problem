#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int ans = 0;
        vector<string> res;
        for (int i = n.size() - 1, p = 1; i >= 0; i--, p *= 10)
        {
            if (n[i] > '0')
            {
                ans++;
                res.push_back(string(1, n[i]) * p);
            }
        }
        cout << ans << '\n';
        for (auto s : res)
            cout << s << ' ';
        cout << '\n';
    }
    return 0;
}
