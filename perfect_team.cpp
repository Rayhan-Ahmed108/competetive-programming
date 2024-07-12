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
    ll ans = min(a, b);
    ll result = (a + b + c) / 3;
    cout << min(ans, result) << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}