#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long temp = n, d = 0;
    while (temp > 0) {
        temp /= 10;
        d++;
    }

    long long val = n * (pow(10, d) - 1); 
    
    long long x = 0;
    for(long long i = n; i <= val; i++) {
        if(val % i == 0) {
            x = i - n;
            break;
        }
    }

    cout << x << endl;
    return 0;
}
