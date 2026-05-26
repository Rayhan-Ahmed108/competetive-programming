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
int n;
vector<int> v(100005);
vector<string> v1(100005), v2(100005);
long long dp[100005][2];
void sol() {
cin >> n;
for(int i = 0; i < n; i++) {
    cin >> v[i];
}
for(int i = 0; i < n; i++) {
    cin >> v1[i];
    v2[i] = v1[i];
    reverse(v2[i].begin(), v2[i].end());
}
dp[0][0] = 0;
dp[0][1] = v[0];
for(int i = 1; i < n; i++) {
    dp[i][0] = dp[i][1] = INF;
    if(v1[i] >= v1[i - 1]) {
        dp[i][0] = min(dp[i][0], dp[i - 1][0]);
    }
    if(v1[i] >= v2[i - 1]) {
        dp[i][0] = min(dp[i][0], dp[i - 1][1]);
    }
    if(v2[i] >= v1[i - 1]) {
        dp[i][1] = min(dp[i][1], dp[i - 1][0] + v[i]);
    }
    if(v2[i] >= v2[i - 1]) {
        dp[i][1] = min(dp[i][1], dp[i - 1][1] + v[i]);
    }  
}
int ans = min(dp[n - 1][0], dp[n - 1][1]);
if (ans >= INF) {
    cout << -1 << endl;
    return;
}
else {
    cout << ans << endl;
    return;
} 

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