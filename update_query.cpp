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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    string k;
    cin >> k;
    sort(k.begin(), k.end());
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        s[v[i] - 1] = k[i];
    }
    cout << s << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}