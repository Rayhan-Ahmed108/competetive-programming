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
    ll n, sum = 0, temp = INT32_MAX, o = 0, temp1 = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 1; i < n - 1; i++)
    {
        temp = min(temp, (v[i] - v[i - 1]));
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        sum += (v[n - 1] - v[i]) / temp;
    }
    vector<ll> v1;
    ll p = v[n - 1];
    for (int i = 1; i <= v.size() - 1; i++)
    {
        v1.push_back(p - (i * temp));
    }
    v1.push_back(p);
    sort(v1.begin(), v1.end());
    for (int i = n - 1; i >= 0; i--)
    {
        if (v1[i] != v[i])
        {
            temp1 = v1[i];
            o = 1;
            break;
        }
    }
    if (n == 1)
        cout << 1 << '\n';
    else if (o == 1)
    {
        sum += (p - temp1) / temp;
        cout << sum << '\n';
    }
    else
        cout << sum + v.size() << '\n';
    {
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}