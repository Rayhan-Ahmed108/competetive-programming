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

#define int long long
const int INF = 1e18;

int n, m;
int v[505][505];
int dp[505][505];
bool vis[505][505];

int rec(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m)
        return INF;

    if (i == n - 1 && j == m - 1)
        return v[i][j];

    if (dp[i][j] != -1)
        return dp[i][j];

    if (vis[i][j])   // 🔴 cycle protection
        return INF;

    vis[i][j] = true;

    int ans = INF;

    ans = min(ans, max(v[i][j], rec(i + 1, j))); // down
    ans = min(ans, max(v[i][j], rec(i, j - 1))); // left
    ans = min(ans, max(v[i][j], rec(i, j + 1))); // right

    vis[i][j] = false;

    return dp[i][j] = ans;
}

void sol() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];

    memset(dp, -1, sizeof(dp));
    memset(vis, false, sizeof(vis));

    cout << rec(0, 0) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}
