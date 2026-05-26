// ALLAH IS ALMIGHTY
// NEVER GIVE UP JEYAM
// TRY TRY & TRY
#include <map>
#include <set>
// #include<ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <cassert>
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

int rec(vi &v) {
    cout << "? " << v.size() << ' ';
    for (auto it : v) cout << it << ' ';
    cout << endl << flush;
    int ans;
    cin >> ans;
    return ans;
}

void sol() {
    int n;
    cin >> n;
    vi v, ans(2*n + 1, -1);
    for (int i = 1; i <= 2*n; i++) {
        v.push_back(i);
        int f = rec(v);
        if (f > 0) {
            ans[i] = f;
            v.pop_back();
        }
    }
    v.clear();
    for (int i = 2*n; i >= 1; i--) {
        v.push_back(i);
        if (ans[i] == -1) {
            int d = rec(v);
            assert(d > 0);
            ans[i] = d;
            v.pop_back();
        }
    }
    cout << "! ";
    for (int i = 1; i <= 2*n; i++) cout << ans[i] << ' ';
    cout << endl << flush;
}
int32_t main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) sol();
}