// ALLAH IS ALMIGHTY
// NEVER GIVE UP JEYAM
// TRY TRY & TRY
#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
#define int long long int
#define FAST_IO                           \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }
const int mod = 1e9 + 7;
const int N = 2e5 + 9;

int n, k, a[N], cnt[2];
int fac[N], inv[N];

int binexp(int a, int b) {
    int ans = 1;
    a %= mod;
    while (b) {
        if (b & 1) ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

void pre() {
    fac[0] = inv[0] = 1;
    for (int i = 1; i < N; i++) {
        fac[i] = fac[i - 1] * i % mod;
        inv[i] = binexp(fac[i], mod - 2);
    }
}

int C(int n, int k) {
    if (k > n) return 0;
    return fac[n] * inv[k] % mod * inv[n - k] % mod;
}

void sol() {
    cin >> n >> k;
    cnt[0] = cnt[1] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int ans = 0;
    for (int i = (k + 1) / 2; i <= k; i++) {
        int res = C(cnt[0], k - i) * C(cnt[1], i) % mod;
        ans = (ans + res) % mod;
    }
    cout << ans << '\n';
}

int32_t main() {
    FAST_IO
    pre();
    int t;
    cin >> t;
    while (t--) sol();
}
