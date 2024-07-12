#include <bits/stdc++.h>
#include<map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        map<int, int> m;
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        for (auto it : m) {
            if (it.second%2 != 0) {
                cout << it.first << '\n';
               break; 
            }
        }
    }
   
}
