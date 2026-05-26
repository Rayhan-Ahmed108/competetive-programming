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
vi v(n+1);
for(int i = 1; i <= n; i++) {
    cin >> v[i];
}
vector<bool>vis(n + 1, 0);
for(int i = 1; i <= n; i++) {
    if(vis[i]) {
        continue;
    }
    vi v1;
    for(int j = i; j <= n; j *= 2) {
        vis[j] = 1;
        v1.push_back(v[j]);
    }
    sort(v1.begin(), v1.end());
    int in = 0;
    for(int j = i; j <= n; j *= 2) {
        v[j] = v1[in];
        in++;
    }
}
if(is_sorted(v.begin(), v.end())) {
    yes
    return;
}
no
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