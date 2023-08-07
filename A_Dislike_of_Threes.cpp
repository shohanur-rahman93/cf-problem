#include <iostream>
using namespace std;

bool is_disliked(int x) {
    return x % 3 == 0 || x % 10 == 3;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int count = 0, x = 1;
        while (count < k) {
            if (!is_disliked(x)) {
                count++;
            }
            x++;
        }
        cout << x-1 << endl;
    }
    return 0;
}
