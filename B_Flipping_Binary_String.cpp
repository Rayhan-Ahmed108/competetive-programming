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
string s;
cin >> s;
vi v, v1;
for(int i = 0; i < n; i++) {
    if(s[i] == '1') {
        v.push_back(i+1);
    }
    else {
        v1.push_back(i+1);
    }
}
if((v.size() % 2) == 0) {
    cout << v.size() << endl;
    for(auto it : v) {
        cout << it << ' ';
    }
    cout << endl;
    return;
}
if((v1.size() % 2) != 0) {
    cout << v1.size() << endl;
    for(auto it : v1) {
        cout << it << ' ';
    }
    cout << endl;
    return;
}
cout << -1 << endl;
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

