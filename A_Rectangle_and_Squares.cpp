#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;

    long long count = 0;
    while (m > 0 && n > 0) {
        if (m > n) swap(m, n);
        count += n / m;       
        n %= m;           
    }

    cout << count << endl;
    return 0;
}
