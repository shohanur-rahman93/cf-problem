#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 1;
    cin >> t;
    int ar[t];
    for (int i = 0; i < t; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < t - 1; i++)
    {
        if (ar[i] != ar[i + 1])
        {
            count++;
        }
    }
    cout << count;
}