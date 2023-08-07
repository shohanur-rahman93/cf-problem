#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n-1));
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            for (int j = 0; j < n-1; j++)
            {
                x ^= v[i][j];
            }
            ans[x] = i+1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
