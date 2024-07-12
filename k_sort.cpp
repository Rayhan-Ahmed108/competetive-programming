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
#define t  \
    int t; \
    cin >> t;
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
    long long int n, ans = 0, sum ;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> v1;
    long long int mx = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= mx)
            mx = v[i];
        else
        {
            v1.push_back(mx - v[i]);
        }
    }
    sort(v1.begin(), v1.end());
    if (v1.size() == 0)
        cout << 0 << '\n';
    else
    {
        sum = v1[0];
        int d = v1.size();
        int temp = v1.size();
        for (int i = 0; i < temp - 1; i++)
        {
            ans += v1[i] * (d + 1);
            d--;
            v1[i + 1] = v1[i + 1] - sum;
            sum += v1[i + 1];
        }
        ans += (2 * (v1[temp - 1]));
        cout << ans << '\n';
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}