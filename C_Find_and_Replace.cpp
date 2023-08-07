#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool can_alternate = true;
        for (char c = 'a'; c <= 'z'; c++) {
            bool has_zero = false, has_one = false;
            for (int i = 0; i < n; i++) {
                if (s[i] == c) {
                    if (i % 2 == 0) {
                        has_zero = true;
                    } else {
                        has_one = true;
                    }
                }
            }
            if (has_zero && has_one) {
                can_alternate = false;
                break;
            }
        }
        cout << (can_alternate ? "YES" : "NO") << '\n';
    }
    return 0;
}
