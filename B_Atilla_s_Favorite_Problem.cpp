#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n % 2 != k % 2 || n < k * k) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            for (int i = 0; i < k - 1; ++i) {
                cout << 1 << " ";
                n--;
            }
            cout << n << "\n";
        }
    }
    return 0;
}
