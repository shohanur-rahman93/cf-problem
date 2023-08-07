#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 1, temp = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            temp++;
            ans = max(ans, temp);
        }
        else
        {
            temp = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
