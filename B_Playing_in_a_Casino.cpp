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
int n, m;
cin >> n >> m;
vector<vector<int>>v(n, vector<int>(m));
vector<vector<int>>v1(m, vector<int>(n));

for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        cin >> v[i][j];
    }
}
for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        v1[i][j] = v[j][i];
    }
}
for(int i = 0; i < m; i++) {
    sort(v1[i].begin(), v1[i].end());
}
int ans = 0;
for(int i = 0; i < m; i++) {
    int sum = 0;
    for(int j = 0; j < n; j++) {
        ans += 1LL * v1[i][j] * j - sum;
        sum += v1[i][j];
    }
}
cout << ans << endl;
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