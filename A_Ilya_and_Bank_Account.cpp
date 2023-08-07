#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int len = s.size();
    if (s[0] == '-' && s[1] == '0')
    { // handle case "-0"
        cout << 0 << endl;
        return 0;
    }

    if (len == 2)
    {                                                // if the bank account has only two digits
        cout << max(s[0] - '0', s[1] - '0') << endl; // output the larger digit
        return 0;
    }

    int ans = stoi(s); // assume no digits will be removed
    for (int i = 0; i < len - 1; i++)
    { // try removing last digit
        int val = stoi(s.substr(0, i) + s.substr(i + 1));
        ans = max(ans, val);
    }

    for (int i = 0; i < len - 2; i++)
    { // try removing second last digit
        int val = stoi(s.substr(0, i) + s.substr(i + 1, len - i - 2) + s.substr(len - 1));
        ans = max(ans, val);
    }

    cout << ans << endl;

    return 0;
}
