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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_length = 0;
        int curr_length = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                curr_length++;
            } else {
                max_length = max(max_length, curr_length);
                curr_length = 0;
            }
        }
        max_length = max(max_length, curr_length);

        cout << max_length << endl;
    }

    return 0;
}
