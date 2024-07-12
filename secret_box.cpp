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
    ll x, y, z, v;
    cin >> x >> y >> z >> v;
    ll cnt = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if (v % (i * j) == 0)
            {
                ll k = v / (i * j);
                cnt = max(cnt, (x - i + 1) * (y - j + 1) * (z - k + 1));
            }
        }
    }
    cout << cnt << endl;
}


int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}