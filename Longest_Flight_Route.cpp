#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 8;
vector<int> g[N];
vector<int> par(N, -1);
vector<int> ef(N, 1);
bool vis[N];
int n, m;

void dfs(int vertex) {
    vis[vertex] = true;
    for (auto child : g[vertex]) {
    if (!vis[child]) dfs(child);
    if (ef[child] + 1 > ef[vertex]) {
    ef[vertex] = ef[child] + 1;
    par[vertex] = child;
    }
    }
}
void sol() {
cin >> n >> m;
for (int i = 1; i <= n; i++) {
    g[i].clear();
    vis[i] = false;
    par[i] = -1;
    ef[i] = 1;
}
for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
}
dfs(1);
if (!vis[n]) {
    cout << "IMPOSSIBLE\n";
    return;
}
vector<int> path;
int cur = 1;
path.push_back(cur);
while (cur != -1 && par[cur] != -1) {
cur = par[cur];
path.push_back(cur);
}
cout << path.size() << endl;
for(auto it : path) cout << it << ' ';
cout << endl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}
