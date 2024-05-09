#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_strength = 0;
    for (int mask = 0; mask < (1 << n); ++mask) {
        int strength = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                strength ^= a[i];
            }
        }
        
    }

    
    return 0;
}
