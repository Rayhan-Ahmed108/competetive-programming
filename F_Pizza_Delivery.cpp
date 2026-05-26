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
int dist(int x1, int y1, int x2, int y2) {
    return llabs(x1 - x2) + llabs(y1 - y2);
}
void sol() {
int n, a1, b1, a2, b2;
cin >> n >> a1 >> b1 >> a2 >> b2;
map<int, int>to, bo;
to[a1] = bo[a1] = b1;
to[a2] = bo[a2] = b2;
vi v1(n), v2(n);
for(int i = 0; i < n; i++) {
    cin >> v1[i];
}
for(int i = 0; i < n; i++) {
    cin >> v2[i];
}
for(int i = 0; i < n; i++) {
    if(!to.count(v1[i])) {
        to[v1[i]] = bo[v1[i]] = v2[i];
        continue;
    }
    to[v1[i]] = max(to[v1[i]], v2[i]);
    bo[v1[i]] = min(bo[v1[i]], v2[i]);
}

vector<pair<int, int>>tp, bp;
for(auto it : to) {
    tp.push_back({it.first, it.second});
}
for(auto it : bo) {
    bp.push_back({it.first, it.second});
}
int sz = tp.size();
vector<vector<int>>dp(sz, vector<int>(2, INF));
dp[0][0] = dp[0][1] = 0;
for(int i = 1; i < sz; i++) {
    for(int j = 0; j < 2; j++) {
        for(int k = 0; k < 2; k++) {
            auto it = (k ? tp[i-1] : bp[i-1]);
            auto cu = (j ? bp[i] : tp[i]);
            dp[i][j] = min(dp[i][j], dp[i-1][k] + dist(it.first, it.second, cu.first, cu.second) + (tp[i].second - bp[i].second));
        }
    }
}
cout << dp[sz-1][0] << endl;
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