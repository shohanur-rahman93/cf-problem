#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int num_kills = 0, num_pairs = 0;
        for (int i = 0; i < n; i++)
        {
            if (h[i] == 1)
            {
                num_kills++;
            }
            else
            {
                num_pairs += h[i] % 2;
            }
        }
        num_pairs = min(num_pairs, num_kills);
        num_kills -= num_pairs;
        int num_spells = num_pairs + (num_kills + 1) / 2;
        cout << num_spells << "\n";
    }
    return 0;
}
