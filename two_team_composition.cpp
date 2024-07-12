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
    int n, temp = -1;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    int y = m.size();
    for (auto it : m)
    {
        temp = max(it.second, temp);
    }

    if (y - 1 >= temp)
        cout << temp << '\n';
    else if (temp - (y - 1) >= 2)
        cout << y << '\n';
    else
        cout << min(y - 1, temp) << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}