#include <iostream>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cout << s[0];
        for (int i = 1; s[i - 1]; i += 2)
            cout << s[i];
        cout << endl;
    }
}