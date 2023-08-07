#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int min_removed = n - 1;
        for (int i = 0; i < n; i++) {
            int lower_bound_diff = a[i] - k;
            int upper_bound_diff = a[i] + k;

            int lower_pos = lower_bound(a.begin(), a.end(), lower_bound_diff) - a.begin();
            int upper_pos = upper_bound(a.begin(), a.end(), upper_bound_diff) - a.begin();

            int num_removed = n - (upper_pos - lower_pos);
            min_removed = min(min_removed, num_removed);
        }

        cout << min_removed << endl;
    }
    return 0;
}
