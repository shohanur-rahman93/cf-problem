#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int winnerIdx = -1;
        int maxQuality = -1;

        for (int i = 0; i < n; i++) {
            int words, quality;
            cin >> words >> quality;

            if (words <= 10 && quality > maxQuality) {
                winnerIdx = i + 1;
                maxQuality = quality;
            }
        }

        cout << winnerIdx << endl;
    }
    return 0;
}
