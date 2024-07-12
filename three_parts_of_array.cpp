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

int main() {
    FAST_IO; 
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll sum = 0, ans = 0, j = n - 1, temp = 0;
    for (int i = 0; i <= j; i++) {
        sum += v[i];
        
        while (sum > ans && j > i) {
            ans += v[j];
            j--;
        }
        
        if (sum == ans) {
            temp = sum;
        }
    }
    
    cout << temp << '\n';
    
}
