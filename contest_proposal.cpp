#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> v1;
        vector<int> v2;
        int n, count = 0;
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v2.push_back(x);
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(v1[i] <= v2[j]) {
                    break;
                } else {
                    count++;
                    v1.erase(v1.end() - 1);
                    v1.push_back(v2[j]);
                    sort(v1.begin(), v1.end());
                    break;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}