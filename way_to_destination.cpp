#include <bits/stdc++.h>
using namespace std;
long long int a[1000][1000];
int main()
{
    long long int n, m;
    cin >> n >> m;
    a[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i + 1 < n)
                a[i + 1][j] += a[i][j];
            if (j + 1 < m)
                a[i][j + 1] += a[i][j];
        }
    }
    cout << a[n - 1][m - 1];
}