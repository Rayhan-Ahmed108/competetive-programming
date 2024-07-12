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
    int n, count = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) != 1 || v[i] % 2 != v[i + 1] % 2)
        {
            count = 1;
            break;
        }
        else
            i = i + 1;
    }
    if (count == 1)
    {
        cout << "NO" << '\n';
    }
    else
        cout << "YES" << '\n';
}

int main()
{
    int y;
    cin >> y;
    while (y--)
        sol();
}