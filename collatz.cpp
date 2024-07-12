#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define t  \
    int t; \
    cin >> t;
#define FAST_IO                           \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }
#define mp make_pair
const int mod = 1e9 + 7;
#define endl "\n"

void sol() {
    long long int a, b, c;
    cin >> a >> b >> c;
    
    if (a % b > c) {
        cout << a + c << '\n';
    } else {
        while (c >= 0) {
            if (a % b == 0) {
                while (a % b == 0) {
                    a = a / b;
                }
            } else if (c >= (b - (a % b))) {
                c -= (b - (a % b));
                a += (b - (a % b));
            } else {
                break;
            }
        }
        cout << a << '\n';
    }
}

int main() {
    FAST_IO;
    int x;
    cin >> x;
    while (x--) {
        sol();
    }
    return 0;
}
