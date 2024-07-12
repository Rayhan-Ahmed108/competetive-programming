#include <bits/stdc++.h>
#include<map>
#include<multiset>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    map<string, multiset<string>> m;
    
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        m[a].insert(b);
    }
    
    count = m.size(); 
    
    cout << count;

    return 0;
}
