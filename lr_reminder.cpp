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
    ll n, k, ans = 1;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        ans *= v[i];
    }
    string s;
    cin >> s;
    int p = 0;
    for (ll i = 0, j = n - 1; i <= j && p < s.size();)
    {
        cout << (ans % k) << ' ';
        if (s[p] == 'L')
        {
            ans /= v[i];
            i++;
        }
        else if (s[p] == 'R')
        {
            ans /= v[j];
            j--;
        }
        p++;
    }
    cout << '\n';
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}
