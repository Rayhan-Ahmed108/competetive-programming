#include<bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    set<pair<string, string> > s;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        s.insert({a, b}); 
    }
    for (auto it : s) {
        cout << it.first << " " << it.second << '\n'; 
    }
    return 0;
}
