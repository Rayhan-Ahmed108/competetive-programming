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

int dp[300005][10];
int n;
vi v(300005);

int rec(int i, int j) {
    if(i >= n) {
        return 0;
    }
    if(dp[i][j] != -1) return dp[i][j];
    int ans = INF;
    for(int k = 1; k <= 6; k++) {
        if(k == j or 7 - k == j) continue;
        int need = 0;
        if(k != v[i]) {
            need++;
        }
        ans = min(ans, need + rec(i + 1, k));
    }
    return dp[i][j] = ans;
}

void sol() {
cin >> n;
v.resize(n);
for(int i = 0; i < n; i++) {
    cin >>v[i];
    for(int j = 0; j < 10; j++) {
        dp[i][j] = -1;
    }
}
cout << rec(0, 0) << endl;
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