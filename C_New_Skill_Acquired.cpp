#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
void sol() {
    int n;
    cin >> n;
    vi v(n+1), v1(n+1);
    vector<vi> res(n+1);
    vi has(n+1, 0);
    queue<int> q;

    for(int i = 1; i <= n; i++) {
        cin >> v[i] >> v1[i];
        if(v[i] == 0 && v1[i] == 0) {
            has[i] = 1;
            q.push(i);
        } else {
            if(v[i] != 0) res[v[i]].push_back(i);
            if(v1[i] != 0) res[v1[i]].push_back(i);
        }
    }
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for(int v : res[u]) {
            if(!has[v]) {
                has[v] = 1;
                q.push(v);
            }
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++) cnt += has[i];
    cout << cnt << endl;
}
    
int32_t main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t;
    // cin >> t;
    // while(t--)
    sol();
}