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
char c;
string s;
cin >> n >> c >> s;
set<char>st;
s = '0' + s;
for(int i = 1; i <= n; i++) {
    st.insert(s[i]);
}
if(s[1] == c and st.size() == 1) {
    cout << 0 << endl;
    return;
}
if(s[n] == c) {
    cout << 1 << endl;
    cout << n << endl;
    return;
}
for(int i = 1; i <= n; i++) {
    set<char>st;
    int j;
    for(j = i; j <= n; j += i) {
        st.insert(s[j]);
    }
    if(st.size() == 1 and s[i] == c) {
        cout << 1 << endl;
        cout << i << endl;
        return;
    }
}
cout << 2 << endl;
cout << n - 1 << ' ' << n << endl;
return;
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