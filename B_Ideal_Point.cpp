#include <bits/stdc++.h>
using namespace std;

const int N = 55;

int freq[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        memset(freq, 0, sizeof(freq));
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
        }

        bool ideal = true;
        for (int i = 1; i <= 50; i++)
        {
            if (freq[i] > freq[k])
            {
                ideal = false;
                break;
            }
        }
        if (ideal)
        {
            cout << "YES\n";
            continue;
        }

        bool possible = false;
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            if (l <= k && k <= r)
            {
                bool ok = true;
                for (int j = 1; j <= 50; j++)
                {
                    if (j < l || j > r)
                    {
                        if (freq[j] >= freq[k])
                        {
                            ok = false;
                            break;
                        }
                    }
                }
                if (ok)
                {
                    possible = true;
                    break;
                }
            }
        }

        if (possible)
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
