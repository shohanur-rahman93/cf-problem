#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i+1]) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
