#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ans = k / n;
        cout << ans * n + min(k % n, n / 2) << endl;
    }
    return 0;
}
