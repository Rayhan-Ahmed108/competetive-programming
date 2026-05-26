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
int n;
cin >> n;
vi v(n);
set<int>s;
map<int, int>m;
int sum = 0;
for(int i = 0; i < n; i++){
    cin >> v[i];
    sum += v[i];
    s.insert(v[i]);
    m[v[i]]++;
}
if(((2*sum) % n) != 0) {
    cout << 0 << endl;
    return;
}
// if(ne != ne1) {
//     cout << 0 << endl;
//     return;
// }
//cout << ne1 << endl;
int ans = 0, need = (2 * sum) / n;
for(int i = 0; i < n; i++) {
    if(m[need-v[i]] >= 1) {
        ans += m[need-v[i]];
    }
    if(v[i] == need - v[i]) {
        ans--;
    }
    // //cout << i << ' ';
    // if(v[i] == ne1*2) {
    //     ans += (m[ne1*2] * m[0]);
    //     m[0] = 0;
    //     m[ne1*2] = 0;
    //     continue;
    // }
    // if(v[i] != ne1) {
    //     if(m[v[i]] >= 1 and m[(2 * ne1) - v[i]] >= 1) {
    //     ans += (m[(2 * ne1)-v[i]] * m[v[i]]);
    //     m[2*ne1-v[i]] = 0, m[v[i]] = 0;
    //     }
    // }
    // else {
    //     ans += m[ne1] / 2;
    // }
    //cout << ans << endl;
}
cout << ans / 2 << endl;

}

int32_t main()
{
    FAST_IO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--)
    sol();
}