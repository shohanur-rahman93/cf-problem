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
        vector<int> freq(n + 1, 0); // Frequency count of each coordinate

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            int coordinate = 0;
            for (int j = 0; ; j++) {
                coordinate += a[i];
                if (coordinate > n) break;
                freq[coordinate]++;
            }
        }

        int max_freq = 0;
        for (int i = 1; i <= n; i++) {
            max_freq = max(max_freq, freq[i]);
        }

        cout << max_freq << endl;
    }
    return 0;
}
