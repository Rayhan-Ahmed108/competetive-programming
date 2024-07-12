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

    ll a, b, count = 0;
    cin >> a >> b;
    vector<ll> v(b);
    for (ll i = 0; i < b; i++)
    {
        cin >> v[i];
        
            
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < b - 1; i++)
    {
        if (v[i] == 1)
        {
            count++;
        }
        else if (v[i] == 2)
        {
            count += 3;
        }
        else if (v[i] > 2)
        {
            count = count + ((v[i] - 2) * 2) + 3;
        }
    }
    cout << count << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}