#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }
    sort(dragons.begin(), dragons.end());
    for (int i = 0; i < n; i++)
    {
        if (s <= dragons[i].first)
        {
            cout << "NO" << endl;
            return 0;
        }
        s += dragons[i].second;
    }
    cout << "YES" << endl;
    return 0;
}
