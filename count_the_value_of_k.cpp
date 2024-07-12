// ALLAH IS ALMIGHTY
// NEVER GIVE UP JEYAM
// TRY TRY & TRY
#include <bits/stdc++.h>
using namespace std;
#include<set>
#define ll long long int
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define pb push_back;
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
    set<ll>s;
    for (ll i = 0;; i++)
    {
        ll temp = pow(a, i);
        if (temp > c)
            break;

        for (ll j = 0;; j++)
        {
            ll divisor = temp * pow(b, j);
            if (divisor > c)
                break;

            if (c % divisor == 0)
            {
                s.insert(c / divisor);
            }
        }
    }

    cout << s.size() << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}
