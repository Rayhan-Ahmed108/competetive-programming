#include <bits/stdc++.h>
using namespace std;
int const N = 1005;
int dp[N][N];
int nCr(int n, int r)
{
    if (r == 1)
        return n;
    if (n == r || r == 0)
        return 1;
    if (dp[n][r] != 0)
        return dp[n][r];
    dp[n][r] = nCr(n - 1, r) + nCr(n - 1, r - 1);
    return dp[n][r];
}
int main()
{

    int n, r;
    cin >> n >> r;
    if (r > n)
        cout << 0;
    else
    {
        cout << nCr(n, r);
    }
}