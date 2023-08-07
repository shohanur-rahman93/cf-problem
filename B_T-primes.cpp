#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) {
        return false;
    }
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isTPrime(long long n) {
    long long sqrtN = sqrt(n);
    if (sqrtN * sqrtN != n) {
        return false;
    }
    return isPrime(sqrtN);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (isTPrime(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
