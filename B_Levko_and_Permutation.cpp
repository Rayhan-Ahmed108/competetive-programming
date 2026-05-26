#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;
#define endl "\n"
const int mod = 1e9 + 7;
const long long INF = 1e18;
#define FAST_IO                           \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }

int binexp( int a,int b){ int ans=1; a=a%mod; while(b){if(b&1){ans=(ans*a)%mod;}a=(a*a)%mod;b>>=1;}return ans;}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

#define vi      vector<int>
#define int     long long int
#define yes     cout << "YES\n";
#define no      cout << "NO\n"; 

void sol() {
int n, k;
cin >> n >> k;
if(n == k) {
    cout << -1 << endl;
    return;
}
if(k == 0) {
    for(int i = 2; i <= n; i++) {
        cout << i << ' ';
    }
    cout << 1 << endl;
    return;
}
if(n - k == 1) {
    for(int i = 1; i <= n; i++) {
        cout << i << ' ';
    }
    cout << endl;
    return;
}
int l = n - k;
vi v(n);
if(l % 2 == 0) {
    v[0] = n, v[n-1] = 1;
    for(int i = 2; i <= k + 1; i++) {
        v[i-1] = i;
    }
    for(int i = k + 2; i < n; i += 2) {
        v[i-1] = i+1, v[i] = i;
    }
    for(int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
    return;
}
v[0] = 1;
for(int i = 2; i <= k; i++) {
    v[i-1] = i;
}
for(int i = k + 1; i < n; i += 2) {
    v[i-1] = i+1, v[i] = i;
}
v[n-1] = n;
for(int i = 0; i < n; i++) {
    cout << v[i] << ' ';
}
cout << endl;
}
int32_t main()
{
    FAST_IO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t;
    // cin >> t;
    // while(t--)
    sol();
}