// ALLAH IS ALMIGHTY
// NEVER GIVE UP JEYAM
// TRY TRY & TRY
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define pb push_back
#define FAST_IO                           \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }
#define mp make_pair
const int mod = 1e9 + 7;
#define endl "\n"

void sol()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (a + c <= b)
    {
        cout << 0 << '\n';
    }
    else if (c == 0 && a > b)
    {
        cout << 1 << '\n';
    }
    else
    {
        ll lo = 0, hi = c, mid;
        a = a + c;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (a - mid > b + mid)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        cout << lo << '\n';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}
