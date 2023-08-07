#include <iostream>
using namespace std;
int main()
{
    int x, n, r = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;
        r += (x - 1);
        (r % 2) ? cout << 1 << endl : cout << 2 << endl;
    }
    return 0;
}