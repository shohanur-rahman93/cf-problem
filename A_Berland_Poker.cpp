#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int cardsPerPlayer = n / k;
        int jokersPerPlayer = min(m, cardsPerPlayer);
        int remainingJokers = m - jokersPerPlayer * (k - 1);
        int maxJokers = jokersPerPlayer + min(remainingJokers, cardsPerPlayer - jokersPerPlayer);
        int points = maxJokers - max(0, maxJokers - cardsPerPlayer);
        cout << points << endl;
    }
    return 0;
}
