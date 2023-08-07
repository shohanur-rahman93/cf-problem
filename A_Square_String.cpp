#include <bits/stdc++.h>
using namespace std;

bool is_square(string s)
{
    int n = s.size();
    if (n % 2 != 0)
    {
        return false;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[i + n / 2])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (is_square(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
