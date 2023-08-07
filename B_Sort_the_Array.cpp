#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = -1, r = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            if (l == -1)
            {
                l = i;
            }
            r = i + 1;
        }
    }
    if (l == -1)
    {
        // Array is already sorted
        cout << "yes\n";
        cout << "1 1\n";
    }
    else
    {
        // Try reversing [l, r]
        reverse(a.begin() + l, a.begin() + r + 1);
        bool sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                sorted = false;
                break;
            }
        }
        if (sorted)
        {
            cout << "yes\n";
            cout << l + 1 << " " << r + 1 << "\n";
        }
        else
        {
            // Try reversing [l-1, r]
            reverse(a.begin() + l - 1, a.begin() + r + 1);
            sorted = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] > a[i + 1])
                {
                    sorted = false;
                    break;
                }
            }
            if (sorted)
            {
                cout << "yes\n";
                cout << l << " " << r << "\n";
            }
            else
            {
                cout << "no\n";
            }
        }
    }
    return 0;
}
