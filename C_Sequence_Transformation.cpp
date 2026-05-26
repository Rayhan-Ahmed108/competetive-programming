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
 /* _,--"^^"-.,_
         _.-"~^`~-.    .-~`^~"-._
     ,="`"-._     .----.     _.-"`"=,
    ;_       "-. (0 )( 0) .-"       _;
   .' `~"=,_    '.\ \/ /.'    _,="~` `.
   ;_       "-. _.-)  (-._ .-"       _;
   : ^~"-.,___.'  (    )  `.___,.-"~^ ;
   :        _:     `--'     :_        :
    '._,-~"` :':          :': `"~-,_.'
       '.,_.-`.            .'`-._,.'
          :__.-`-.______.-'`-.__;
                 //    \\
               (((~    ~)))
*/
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
set<int>s;
map<int, vector<int>>m;
int temp = -1, temp1 = -1;
for(int i = 0; i < n; i++) {
    cin >> v[i];
}
v.erase(unique(v.begin(), v.end()), v.end());
for(int i = 0; i < v.size(); i++) {
    s.insert(v[i]);
    m[v[i]].push_back(v[i]);
    if(i == 0) {
        temp = v[0];
    }
    if(i == v.size() - 1) {
        temp1 = v[i];
    }
}
if(s.size() == 1) {
    cout << 0 << endl;
    return;
}
int mn = INF;
for(auto i : s) {
    int count = m[i].size() - 1;
    if(m[i].size() == 1) {
        if(i == temp or i == temp1) {
            mn = min(mn, 1LL);
            continue;
        }
        else {
            mn = min(mn, 2LL);
            continue;
        }
    }
    else {
        if(temp == i) {
            if(temp1 == i) {
                mn = min(mn,(int)m[i].size() - 1);
                continue;
            }
            else {
                mn = min(mn, (int)m[i].size());
                continue;
            }
        }
        else if(temp1 == i) {
            if(temp == i) {
                mn = min(mn, (int)m[i].size() - 1);
                continue;
            }
            else {
                mn = min(mn, (int)m[i].size());
                continue;
            }
        }
        else {
            mn = min(mn, (int)m[i].size() + 1);
        }
    }
}
cout << mn << endl;
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