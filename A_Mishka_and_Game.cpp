#include <iostream>

using namespace std;

int main() {
    int n, m, c;
    int mishka_wins = 0, chris_wins = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m >> c;
        if (m > c) {
            mishka_wins++;
        } else if (m < c) {
            chris_wins++;
        }
    }
    if (mishka_wins > chris_wins) {
        cout << "Mishka" << endl;
    } else if (mishka_wins < chris_wins) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
