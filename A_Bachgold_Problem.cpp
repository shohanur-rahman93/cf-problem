#include <bits/stdc++.h>
using namespace std;

// function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> primes; // vector to store the primes
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }

    cout << primes.size() << endl;
    for (int p : primes)
    {
        cout << p << " ";
    }

    return 0;
}
