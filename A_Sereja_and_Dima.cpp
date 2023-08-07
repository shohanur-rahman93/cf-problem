#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int i = 0, j = n - 1, sereja = 0, dima = 0, turn = 1;
    while (i <= j)
    {
        if (a[i] > a[j])
        {
            if (turn % 2)
                sereja += a[i];
            else
                dima += a[i];
            i++;
        }
        else
        {
            if (turn % 2)
                sereja += a[j];
            else
                dima += a[j];
            j--;
        }
        turn++;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
