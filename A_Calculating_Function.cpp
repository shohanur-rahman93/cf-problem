#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a / 2;
    }
    else
    {
        b = -(a /2 + 1);
        cout << b;
    }
}