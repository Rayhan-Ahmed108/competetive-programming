#include <iostream>
#include <string>
using namespace std;

void solve();

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve(); 
    }
    return 0;
}

void solve() {
    int a, b, count = 0, temp = 0, d = 0; 
    cin >> a >> b;
    string s, n;
    cin >> s >> n;
    for (int i = 0; i < a; i++) {
        for (int j = temp; j < b; j++) {
            if (s[i] == n[j]) {
                d = 1;
                count++;
                temp = j + 1;
                break;
            }
        }
        if (d != 1) {
            cout << count << "\n";
            return; 
        } else {
            d = 0;
        }
    }
    cout << count << "\n";
}
