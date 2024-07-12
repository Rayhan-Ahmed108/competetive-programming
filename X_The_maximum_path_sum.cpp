#include <bits/stdc++.h>
using namespace std;

int n, m;
int mx = INT_MIN;

void recur(vector<vector<int> > &v, int i, int j, int sum)
{

    if (i == n && j == m)
    {
        sum += v[n][m];
        mx = max(mx, sum);
        return;
    }

    if (i < n)
    {
        recur(v, i + 1, j, sum + v[i][j]);
    }
    if (j < m)
    {
        recur(v, i, j + 1, sum + v[i][j]);
    }
}

int main()
{
    cin >> n >> m;
    vector<vector<int> > v;
    for (int i = 0; i < n; i++)
    {
        vector<int> vv(m);
        for (int j = 0; j < m; j++)
        {
            cin >> vv[j];
        }
        v.push_back(vv);
    }
    n--; m--;
    recur(v, 0, 0, 0);
    cout << mx << endl;
}