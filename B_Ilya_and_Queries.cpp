#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5 + 5;
int n, m, ans[N];
char str[N];
vector<int> g[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> str + 1 >> m;
    n = strlen(str + 1);
    for (int i = 1; i < n; ++i)
    {
        if (str[i] == str[i + 1])
        {
            g[i].push_back(i + 1);
            g[i + 1].push_back(i);
        }
    }
    for (int i = 1; i < n; ++i)
    {
        int sz = g[i].size();
        for (int j = 0; j < sz; ++j)
        {
            g[i].insert(g[i].end(), g[g[i][j]].begin(), g[g[i][j]].end());
        }
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        int res = 0;
        for (int i = 0; i < g[l].size(); ++i)
        {
            if (g[l][i] < r)
                ++res;
        }
        ans[m] = res;
    }
    for (int i = m - 1; i >= 0; --i)
        cout << ans[i] << endl;
    return 0;
}
