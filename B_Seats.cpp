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
int n, res = -1, res1 = -1;
cin >> n;
string s;
cin >> s;
int count = 0, need = 0;
for(int i = 0; i < n; i++) {
    count += (s[i] == '1');
}
if(count == 0) {
    cout << (n + 2) / 3 << endl;
    return;
}
for(int i = 0; i < n; i++) {
    if(s[i] == '1') {
        if(res == -1) {
            res = i;
        }
        res1 = i;
    }
}
if(res > 0) {
    need += ((res + 1) / 3);
}
if(res1 < n - 1) {
    need += ((n - res1) / 3);
}
int cnt = 0;
for(int i = res; i <= res1; i++) {
    if(s[i] == '0') {
        cnt++;
    }
    else {
        need += (cnt / 3);
        cnt = 0;
    }
}
cout << need + count << endl;
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