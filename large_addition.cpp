#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void sol() {
    string k;
    cin >> k;
    int j = k.size();
    if (k[j - 1] == '9')
        no;
    else if (j <= 2) {
        int h = (k[0] - 48) * 10 + k[1] - 48;
        if (h >= 10 && h <= 18) {
            yes;
        } else
            no;
    } else if (j == 3) {
        int temp = 0;
        for (int i = 0; i < j - 1; i++) {
            if (k[i] == '0') {
                temp = 1;
                break;
            }
        }
        if (temp == 1) {
            no;
        } else {
            int p = (k[0] - 48) * 10 + k[1] - 48;
            if (p >= 10 && p <= 18) {
                yes;
            } else
                no;
        }
    } else if (j <= 3) {
        if (k[1] == '0' && k[2] == '0') {
            no;
        } else {
            int y = (k[0] - 48) * 10 + k[1] - 48;
            if (y > 10 && y <= 17) {
                yes;
            } else
                no;
        }
    }
}

int main() {
    FAST_IO;
    int n;
    cin >> n;
    while (n--)
        sol();
    return 0;
}
