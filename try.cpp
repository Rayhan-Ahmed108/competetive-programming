#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int mn = INFINITY, mn1 = mn;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            mn = min(mn, v[i]^v[j]);
        }
    }
    for(int i = 0; i < n - 1; i++) {
        mn1 = min(mn1, v[i]^v[i+1]);
    }
    cout << mn << ' ' << mn1 << endl;
}