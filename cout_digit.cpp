#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int i) {
    
    if (i == s.size())
        return;

    cout << s[i] << ' '; 
    solve(s, i + 1);     
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        solve(s, 0); 
        cout << endl; 
    }

    return 0;
}
