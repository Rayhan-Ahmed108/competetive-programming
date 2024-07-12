#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        while (n > 0) {
            if (n & 1) {
                cout << 1 << ' ';
                count++;
            } else {
                cout << 0 << ' ';
            }
            n >>= 1;
        }
        // Print remaining zeros to complete binary representation
        while (count--) {
            cout << 0 << ' ';
        }
        cout << '\n';
    }
    return 0;
}
