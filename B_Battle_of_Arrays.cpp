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
priority_queue<int> p, q;

for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    p.push(x);
}
for(int i = 0; i < m; i++) {
    int x;
    cin >> x;
    q.push(x);
}
bool flag = true;
while (true) {
if (flag) {
    if (q.empty()) {
        cout << "Alice" << endl;
        break;
    }
    int x = p.top();  
    int y = q.top(); q.pop();
    if(y > x) {
        q.push(y - x);
    }
    if(q.empty()) {
        cout << "Alice" << endl;
        break;
    }
} 
else {
    if(p.empty()) {
        cout << "Bob" << endl;
        break;
    }

    int x = q.top();
    int y = p.top(); p.pop();
    if(y > x) {
        p.push(y - x);
    }
    if(p.empty()) {
        cout << "Bob" << endl;
        break;
    }
}
flag = !flag;
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