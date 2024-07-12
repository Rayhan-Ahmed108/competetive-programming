#include <bits/stdc++.h>
using namespace std;

int n, m;
int mx = INT_MIN;

int recur(vector<vector<int> >& v, vector<vector<int> >& dp, int i, int j) {
   
    if (i == n && j == m) {
        return v[n][m];
    }

 
    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int sum = v[i][j];

    
    int downSum = (i < n) ? recur(v, dp, i + 1, j) : INT_MIN;
    
    
    int rightSum = (j < m) ? recur(v, dp, i, j + 1) : INT_MIN;

    dp[i][j] = sum + max(downSum, rightSum);
    return dp[i][j];
}

int main() {
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    n--; m--;
    vector<vector<int> > dp(n + 1, vector<int>(m + 1, -1));

  
    mx = recur(v, dp, 0, 0);
    cout << mx << endl;

    return 0;
}
