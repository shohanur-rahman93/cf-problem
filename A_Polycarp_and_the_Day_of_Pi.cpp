#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i, n;
        n = s.length();
        int arr[] = {314159265, 358979323, 846264338, 327950288, 419716939, 937510582, 097494459, 230781640, 628620899, 862803482};
        for (i = 0; i < n; i++)
        {
            if (s[i] == '.')
                break;
        }
        if (i == n)
            i = n + 1;
        if (i <= 10)
        {
            string p;
            p = s.substr(0, i);
            int k = stoi(p);
            int flag = 0;
            for (int j = 0; j < 10; j++)
            {
                if (arr[j] >= k)
                {
                    cout << j << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "10" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}
