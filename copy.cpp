#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long int
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n; 
        vector<ll> a(n); 
        
        for(ll i = 0; i < n; ++i) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end()); 
 
        ll count = 1; 
        for(ll i = 1; i < n; ++i) {
            if(a[i] != a[i-1]) {
                count++;
            }
        }
 
        cout << count << endl;
 
    }
    return 0;
}