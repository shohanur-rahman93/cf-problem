#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> f(vector<int>& a, int x) {
    vector<int> result(a.size());
    for (int i = 0; i < a.size(); i++) {
        result[i] = a[i] % x;
    }
    return result;
}

bool is_palindrome(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int solve(vector<int>& a) {
    int max_x = 0;
    for (int x = 1; x <= 1000000000; x++) {
        vector<int> fa = f(a, x);
        if (is_palindrome(fa)) {
            max_x = x;
        }
    }
    return max_x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = solve(a);
        cout << ans << endl;
    }
    return 0;
}
