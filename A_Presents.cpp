#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    for (int j = 1; j <= a; j++)
    {
        for (int i = 0; i < a; i++)
        {
            if (ar[i] == j)
            {
                cout << i + 1 << " ";
            }
        }
    }
}