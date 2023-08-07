#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;

    string names[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long cnt = 5; // number of people in the queue
    long long power = 1; // power of 2
    while (n > cnt * power) {
        n -= cnt * power;
        cnt *= 2;
        power *= 2;
    }

    int index = ceil((double)n / cnt) - 1;
    cout << names[index] << endl;

    return 0;
}
