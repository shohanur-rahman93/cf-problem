#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = n/2;
        int y = n - x;
        while(x > 0 && (x%10)+(y%10) > 9) {
            x--;
            y++;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
