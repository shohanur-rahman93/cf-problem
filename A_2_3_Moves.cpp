#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = n; // Initialize ans to n, which is the maximum possible value
        for (int i = max(1, n-5); i <= n; i++) { // Check all possible starting positions from n-5 to n
            int steps = abs(i - n); // Calculate the number of steps needed to reach n from i
            if (steps % 2 == 1) continue; // If the number of steps is odd, it's impossible to reach n in integer minutes
            int jumps = steps / 2; // Calculate the number of jumps needed to cover the steps
            if (i + 2*jumps == n || i + 3*jumps == n) { // If i+jumps*2 or i+jumps*3 is equal to n, we've found a valid solution
                ans = min(ans, jumps); // Update ans to the minimum number of jumps found so far
            }
        }
        cout << ans << endl; // Output the answer for this test case
    }
    return 0;
}
