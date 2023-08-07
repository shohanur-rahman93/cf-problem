#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t, b, c, d, e;
    cin >> t;
    for (;;)
    {

        t++;
        b = t/ 1000;
        c = (t/ 100) % 10;
        d = (t / 10) % 10;
        e = (t % 10);
        if (b != c && b != d && b != e && c != d && c != e && d!=e)
        {
            break;
        }
    }
    cout << t;
}