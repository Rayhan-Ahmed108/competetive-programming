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
string a[500], b[500];
void sol()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j] - '0';
            sum -= b[i][j] - '0';
        }
        if (sum % 3 != 0)
            ans = 1;
    }
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i][j] - '0';
            sum -= b[i][j] - '0';
        }
        if (sum % 3 != 0)
            ans = 1;
    }
    if (ans == 1)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}