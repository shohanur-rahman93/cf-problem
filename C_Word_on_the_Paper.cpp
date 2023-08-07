#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        string word;
        for (int i = 0; i < 8; i++) {
            string line;
            cin >> line;
            word += line[0]; // Concatenate the first character of each line
        }
        cout << word << endl;
    }
    return 0;
}
