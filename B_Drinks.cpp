#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    float sum = 0;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum / t;
}