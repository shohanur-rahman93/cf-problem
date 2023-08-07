#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int odd_parity = 0, even_parity = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == i % 2) {
                if (i % 2 == 0) {
                    even_parity++;
                } else {
                    odd_parity++;
                }
            }
        }
        if (n % 2 == 0 && odd_parity != even_parity) {
            cout << -1 << endl;
        } else if (n % 2 == 1 && abs(odd_parity - even_parity) != 1) {
            cout << -1 << endl;
        } else {
            int swaps = 0;
            for (int i = 0; i < n; i += 2) {
                if (a[i] % 2 != 0) {
                    for (int j = i + 1; j < n; j += 2) {
                        if (a[j] % 2 != 0) {
                            swap(a[i], a[j]);
                            swaps++;
                            break;
                        }
                    }
                }
            }
            for (int i = 1; i < n; i += 2) {
                if (a[i] % 2 == 0) {
                    for (int j = i + 1; j < n; j += 2) {
                        if (a[j] % 2 == 0) {
                            swap(a[i], a[j]);
                            swaps++;
                            break;
                        }
                    }
                }
            }
            cout << swaps << endl;
        }
    }
    return 0;
}
