#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt[4] = {}; // stores the count of books for each skill combination
        int m1 = 1e9, m2 = 1e9; // stores the minimum times for each skill
        for(int i = 0; i < n; i++) {
            int m;
            string s;
            cin >> m >> s;
            int skill = (s[0] - '0') * 2 + (s[1] - '0'); // skill is a number from 0 to 3
            cnt[skill]++;
            if(skill == 0) continue;
            if(skill == 1) m1 = min(m1, m);
            if(skill == 2) m2 = min(m2, m);
            if(skill == 3) m1 = m2 = min(m1, m2); // if both skills can be acquired from this book, we can choose either one
        }
        if(cnt[1] == 0 || cnt[2] == 0) { // if we cannot acquire one of the skills
            cout << "-1\n";
            continue;
        }
        int ans = min(m1 + m2, min(m1 + m1 + m2 + m2, m2 + m2 + m1 + m1)); // choose the minimum time for acquiring both skills
        cout << ans << "\n";
    }
    return 0;
}
