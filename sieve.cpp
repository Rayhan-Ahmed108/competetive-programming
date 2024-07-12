#include<bits/stdc++.h>
using namespace std;

int nthPrime(int n)
{
    vector<bool> isPrime(n * 1000000, true);
    vector<int> primes;
    for (int p = 2; p < isPrime.size(); p++)
    {
        if (isPrime[p])
        {
            if(p*p==n)
            primes.push_back(p);
            // if (primes.size() == n)
            //     return p;
            for (int i = p * p; i < isPrime.size(); i += p)
                isPrime[i] = false;
        }
    }
    return -1;
}

int main()
{
    int n;

    cin >> n;
    cout << "The " << n << "th prime number is: " << nthPrime(n) << endl;
    return 0;
}
