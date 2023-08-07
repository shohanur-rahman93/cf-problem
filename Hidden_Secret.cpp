#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string normalize(string s)
{

    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    sort(s.begin(), s.end());
    return s;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for (int t = 1; t <= T; t++)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        s1 = normalize(s1);
        s2 = normalize(s2);
        cout << "Case " << t << ": ";
        if (s1 == s2)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}
