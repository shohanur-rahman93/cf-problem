#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;

int main()
{
    int n, m;
    cin >> n;
    vector<ll> a(n), b(n + 1), c(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> sorted_a(a);
    sort(sorted_a.begin(), sorted_a.end());
    for (int i = 1; i <= n; i++)
    {
        b[i] = b[i - 1] + a[i - 1];
        c[i] = c[i - 1] + sorted_a[i - 1];
    }
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << b[r] - b[l - 1] << endl;
        }
        else
        {
            cout << c[r] - c[l - 1] << endl;
        }
    }
    return 0;
}
