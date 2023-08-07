#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool can_obtain(vector<int> &c)
{
    int n = c.size();
    vector<bool> dp(n + 1);
    dp[0] = true;
    int sum = 1; // current sum of a
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (dp[i] && (sum == c[i] || sum < c[i] && dp[i + 1]))
            {
                // can obtain c[i+1] from a by adding some subsequence
                if (j == n || sum + c[j] > c[i + 1])
                    return false;
                sum += c[j];  // add c[j] to the current sum of a
                dp[j] = true; // mark as reachable
            }
        }
        if (sum != c[i])
            return false; // cannot obtain c[i] from a
    }
    return true; // can obtain all elements of c from a
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        cout << (can_obtain(c) ? "YES" : "NO") << endl;
    }
    return 0;
}
