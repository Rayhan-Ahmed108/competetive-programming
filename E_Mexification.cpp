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

void sol(){
    int n, k;
    cin >> n >> k;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vi odd = v, even;
    int steps = min(4LL, k);
    for(int j = 1; j <= steps; j++) {
        vi freq(n+2,0);
        for(int x : v) if(x <= n) freq[x]++;
        int mex = 0;
        while(mex <= n && freq[mex]) mex++;

        vi nxt = v;
        for(int i = 0; i < n; i++){
            int val = v[i];
            if(val > mex) nxt[i] = mex;
            else if(val < mex) {
                if(freq[val] > 1) nxt[i] = mex;
                else nxt[i] = val;
            }
            else nxt[i] = mex;
        }
        v.swap(nxt);
        if(j & 1) odd = v;
        else even = v;
    }
    k -= steps;
    if(k == 0){
        cout << accumulate(v.begin(), v.end(), 0LL) << endl;
        return;
    }
    if(k & 1) cout << accumulate(odd.begin(), odd.end(), 0LL) << endl;
    else cout << accumulate(even.begin(), even.end(), 0LL) << endl;
}
int32_t main() {
    FAST_IO
    int t;
    cin >> t;
    while(t--)
    sol();
}
