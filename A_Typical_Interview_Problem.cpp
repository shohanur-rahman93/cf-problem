#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n, m;
        cin >> a >> b >> n >> m;
        if (a > b) swap(a, b); // to ensure a <= b
        int cost = min(n, m) * a + max(n - m, 0) * b;
        cout << cost << "\n";
    }
    return 0;
}
