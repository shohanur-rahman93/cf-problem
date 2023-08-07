#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    int ar[t];
    for (int i = 0; i < t; i++)
    {
        cin >> ar[i];
        if (ar[i] == 1)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
}