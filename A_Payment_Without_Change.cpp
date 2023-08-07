#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    
    while (q--) {
        int a, b, n, S;
        cin >> a >> b >> n >> S;
        
        // check if there is a combination of x and y such that n*x + y = S
        int max_x = min(a, S/n); // maximum number of n-coins that can be taken
        if (max_x * n + b >= S) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
