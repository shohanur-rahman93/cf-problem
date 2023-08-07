#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int sum = s - r; // find the value of the missing die
        int a[n];
        for (int i = 0; i < n; i++)
        {
            if (sum >= 6)
            {
                a[i] = 6;
                sum -= 6;
            }
            else if (sum > 0)
            {
                a[i] = sum;
                sum = 0;
            }
            else
            {
                a[i] = 1; // fill the rest with minimum value
            }
        }
        sort(a, a + n); // sort the array in non-decreasing order
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}