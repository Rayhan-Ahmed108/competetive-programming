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
    set<int> p;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
        v[i]--;
        p.insert(v[i]);
    }

    string c;
    cin >> c;
    sort(c.begin(), c.end());
    int k=0;
    for (auto it : p)
    {
        s[it] = c[k];
        k++;
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