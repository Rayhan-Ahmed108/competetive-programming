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
vi v(n);
map<int, int>m;
for(int i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]]++;
}
int temp = -1;
for(int i = 1; i <= n; i++) {
    if(!m[i]) {
        temp = 1;
        break;
    }
}
if(temp == -1) {
    for(int i = 0; i < k; i++) {
        cout << v[i % 3] << ' ';
    }
    cout << endl;
    return;
}
else {
    vi v1(3);
    for(int i = 1; i <= n; i++) {
        if(m[i] == 0) {
            v1[0] = i;
            break;
        }
    }
    v1[2] = v[n - 1];
    for(int i = 1; i <= n; i++) {
        if(i != v1[0] and i != v1[2]) {
            v1[1] = i;
            break;
        }
    }1
    for(int i = 0; i < k; i++) {
        cout << v1[(i % 3)] << ' ';
    }
    cout << endl;
}

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