// ALLAH IS ALMIGHTY
// NEVER GIVE UP JEYAM
// TRY TRY & TRY
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define in(n) int n; cin >> n;
#define pq priority_queue<pair<int,int>>
#define lll __int128_t
#define lb lower_bound
#define ub upper_bound
#define vi vector<int>
#define print(arr) for(auto x: arr) cout << x << " "; cout << "\n";
#define pq1 priority_queue<int, vector<int>, greater<int>>

#ifdef DEBUG
#include<algo/debug.h>
#else
#define clog if(0) cerr
#define NB 40
#define db(...) ""
#endif

const long long INF = 1e18;
int dx[8] = {0,1,0,-1,1,-1,1,-1};
int dy[8] = {-1,0,1,0,1,1,-1,-1};
#define FAST_IO { ios_base::sync_with_stdio(false); cin.tie(0); }
#define mp make_pair
const int mod = 1e9 + 7;
#define endl "\n"
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int inv(int i){ if(i==1) return 1; return (mod - ((mod/i) * inv(mod%i))%mod)%mod; }
int mod_mul(int a,int b){ return ((a%mod)*(b%mod))%mod; }
int mod_add(int a,int b){ return ((a%mod + b%mod)%mod); }
int mod_sub(int a,int b){ return ((a%mod - b%mod + mod)%mod); }
int ceil_div(int a,int b){ return a%b==0 ? a/b : a/b + 1; }
int lcm(int a,int b){ return (a*b)/__gcd(a,b); }
int binexp(int a,int b){ int ans=1; a%=mod; while(b){ if(b&1) ans=(ans*a)%mod; a=(a*a)%mod; b>>=1;} return ans; }
bool isPrime(int n){ if(n<=1) return false; if(n<=3) return true; if(n%2==0||n%3==0) return false; for(int i=5;i*i<=n;i+=6) if(n%i==0||n%(i+2)==0) return false; return true; }

int legend(int n,int x){ int ans=0; while(n){ ans+=(n/x); n/=x; } return ans; }
bool isSquare(int n){ if(n<0) return false; int root=sqrt(n); return root*root==n; }
const int dx1[] = {-1,1,0,0};
const int dy1[] = {0,0,-1,1};

void sol(){
    int n;
    cin >> n;
    vi v(n+1);
    int sum = 0, sum1 = 0;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        if(i % 2 != 0){
            sum += v[i];
        } else {
            sum -= v[i];
        }
    }
    if(n == 1) {
        cout << sum << endl;
        return;
    }
    int ks = INF, ks1 = ks;
    int need = 0;
    need = max(need, n - (n % 2 == 0) - 1);
    need = max(need, n - (n % 2 == 1) - 2);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            if(ks != INF) {
                need = max(need, i - 2 * v[i] - ks);
            }
            ks1 = min(ks1, i + 2 * v[i]);
        }
        else {
            if(ks1 != INF) {
                need = max(need, i + 2 * v[i] - ks1);
            }
            ks = min(ks, i - 2 * v[i]);
        }
    }
    cout << sum + need << endl;
    // int alice = odd[0].first, alice1 = odd[0].second;
    // for(int i = 0; i < even.size(); i++){
    //     res = max(res, res1 + even[i].first - alice + abs(alice1 - even[i].second));
    // }

    // sort(even.begin(), even.end());
    // sort(odd.rbegin(), odd.rend());

    // int bob = even[0].first, bob1 = even[0].second;
    // for(int i = 0; i < odd.size(); i++){
    //     res = max(res, res1 + odd[i].first - bob + abs(bob1 - odd[i].second));
    // }

    // cout << res << endl;
}

int32_t main(){
    FAST_IO
    int t;
    cin >> t;
    while(t--) sol();
}
