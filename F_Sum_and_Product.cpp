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
map<int, int>m;
for(int i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]]++;
}
int q;
cin >> q;
while(q--) {
    int x, y;
    cin >> x >> y;
    int need = (1LL * x * x) - (4 * y * 1LL);
    if(need < 0) {
        cout << 0 << ' ';
        continue;
    }
    int ans = sqrt(need);
    if((ans * ans * 1LL) != need) {
        cout << 0 << ' ';
        continue;
    }
    int re1 = ((x + ans)>>1LL), re2 = x - re1;
    if(re1 == re2) {
        if(m.count(re1)) {
            cout << ((1LL * m[re1] * (m[re1] - 1)) >> 1LL) << ' ';
            continue;
        }
        else {
            cout << 0 << ' ';
            continue;
        }
    }
    else {
        if(m.count(re1) and m.count(re2)) {
            cout << (1LL * m[re1] * m[re2]) << ' ';
            continue;
        }
        else {
            cout << 0 << ' ';
        }
    }
}
cout << endl;
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