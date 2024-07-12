// ALLAH IS ALMIGHTY
// NEVER GIVE UP JEYAM
// TRY TRY & TRY
#include <bits/stdc++.h>
#include <map>
#include <set>
using namespace std;
#define ll long long int
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define FAST_IO
#define pb                                \
    push_back;                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }
#define mp make_pair
const int mod = 1e9 + 7;
#define endl "\n"
void sol()
{
    int n;
    cin >> n;
    if (n >= 1100)
        cout << "YES" << '\n';
    else if (n < 11)
        cout << "NO" << '\n';
    else
    {
        vector<bool> dp(n + 1, false);
        dp[0] = true;

        for (int i = 0; i <= n; ++i)
        {
            if (dp[i])
            {
                if (i + 11 <= n)
                    dp[i + 11] = true;
                if (i + 111 <= n)
                    dp[i + 111] = true;
            }
        }
        if (dp[n])
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}