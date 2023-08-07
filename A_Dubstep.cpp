#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    // Remove all occurrences of "WUB"
    while (s.find("WUB") != string::npos) {
        s.replace(s.find("WUB"), 3, " ");
    }

    // Remove leading/trailing spaces
    while (s[0] == ' ') {
        s.erase(0, 1);
    }
    while (s[s.size() - 1] == ' ') {
        s.erase(s.size() - 1, 1);
    }

    // Replace multiple spaces with a single space
    string result;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            continue;
        }
        result += s[i];
    }

    cout << result << endl;

    return 0;
}
