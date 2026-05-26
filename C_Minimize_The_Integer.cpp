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
string s;
cin >> s;
int ev = 0, od = 0, k = s.size();
for(int i = 0; i < k; i++) {
    ev += !((s[i]-'0') % 2);
    od += ((s[i]-'0') % 2);
}
if(ev == 0 or od == 0) {
    cout << s << endl;
    return;
}
string even = "", odd = "";
for(auto ch : s) {
    int ans = ch - '0';
    if(ans % 2 == 0) {
        even += ch;
    }
    else {
        odd += ch;
    }
}
string res = "";
int i = 0, j = 0;
while(i < even.size() && j < odd.size()) {
    if(even[i] >= odd[j]) {
        res += odd[j];
        j++;
    }
    else {
        res += even[i];
        i++;
    }
}
if(i == even.size() and j == odd.size()) {
    cout << res << endl;
    return;
}
if(i != even.size()) {
    while(i != even.size()) {
        res += even[i];
        i++;
    }
    cout << res << endl;
    return;
}
while(j != odd.size()) {
        res += odd[j];
        j++;
}
cout << res << endl;
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