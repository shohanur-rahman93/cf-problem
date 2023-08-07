#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count[26] = {};
        for (char c : s) {
            count[c - 'a']++;
        }
        int diff = 0;
        string target = "codeforces";
        for (int i = 0; i < 10; i++) {
            int targetCount = count[target[i] - 'a'];
            if (targetCount < 1) {
                diff += 1;
            }
            count[target[i] - 'a'] = max(0, targetCount - 1);
        }
        cout << diff << endl;
    }
    return 0;
}
