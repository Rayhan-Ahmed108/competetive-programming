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
int pf[10000];
void sol()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pf[i] = pf[i - 1] + v[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pf[r] - pf[l - 1] << '\n';
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}
//time:O(n)+O(q)==max(O(n),O(q));