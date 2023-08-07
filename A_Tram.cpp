#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;
    int a, b;
    int sum = 0, k = 0;

    for (int i = 0; i < c; i++)
    {
        cin >> a >> b;
        sum = (a + k) - b;
        if (sum < 0)
            k = 0;
        else
            k = sum;
    }
    cout << sum;
}