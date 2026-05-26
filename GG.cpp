// ALLAH IS ALMIGHTY
// NEVER GIVE UP JEYAM
// TRY TRY & TRY
#include <bits/stdc++.h>
#include <map>
#include <set>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int     long long int
#define yes     cout << "YES\n";
#define no      cout << "NO\n"; 
#define pb      push_back;
#define in(n)   int n; cin >> n;
#define pq      priority_queue<pair<int,int>>
#define lll     __int128_t
#define lb      lower_bound
#define ub      upper_bound
#define vi      vector<int>
#define print(ar)         for(auto x: arr)cout<<x<<" ";nl;
#define pq1      priority_queue<int, vector<int>, greater<int>> pq1;

#ifdef DEBUG
#include<algo/debug.h>
#else
#   define clog if (0) cerr
#   define NB 40
#   define db(...) "" 
#endif

const long long INF = 1e18;
int dx[8] = {0,1,0,-1,1,-1,1,-1};
int dy[8] = {-1,0,1,0,1,1,-1,-1};
#define FAST_IO                           \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }
#define mp make_pair
const int mod = 1e9 + 7;
#define endl "\n"
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_sub(int a, int b) {a = a % mod; b = b % mod; return (((a - b + mod) % mod) + mod) % mod;}
int ceil_div(int a, int b) {return a % b == 0 ? a / b : a / b + 1;}
int lcm(int a, int b){ if(a*b==0) return 0; else return a*b/__gcd(a,b);}
int binexp( int a,int b){ int ans=1; a=a%mod; while(b){if(b&1){ans=(ans*a)%mod;}a=(a*a)%mod;b>>=1;}return ans;}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}




int legend(int n, int x) {
    int ans = 0;
    while(n) {
        ans += (n / x);
        n /= x;
    }
    return ans;
}

bool isSquare(int n) {
    if (n < 0) return false; 
        int root = sqrt(n);
            return root * root == n;
}
const int dx1[] = {-1, 1, 0, 0}; //up, down, left, right
const int dy1[] = {0, 0, -1, 1};

// bool isValid(int x, int y) {
//     return (x >= 0 && x < n && y >= 0 && y < m);
// }
const double r = 50.0;
const double PI = acos(-1.0);
double rec1(int x, int y) {
    int d = abs(x - y);
    if (d > 4) d = 8 - d;
    return 2.0 * r * sin(PI * d / 8.0);
}
double rec2(int x, int y) {
    int d = (y - x + 8) % 8;
    return r * 2.0 * PI * d / 8.0;
}
double rec3(int x, int y) {
    int d = (x - y + 8) % 8;
    return r * 2.0 * PI * d / 8.0;
}
void sol(){
string s;
cin >> s;
int x = s[0] - '0', y = s[2] - '0';
char c = s[1];
if (c == '-') {
    cout << fixed << setprecision(10) << rec1(x, y) << endl;
    return;
}
else if (c == '>') {
    cout << fixed << setprecision(10) << rec2(x, y) << endl;
    return;
}
else if (c == '<') {
    cout << fixed << setprecision(10) << rec3(x, y) << endl;
    return;
}
else {
    cout << fixed << setprecision(10) <<  2.0 * (r) << "\n";
    return;
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