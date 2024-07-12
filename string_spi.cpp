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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (v[0] == v[n - 1])
    {
        cout << "NO" << '\n';
        
    }
    else
    {
        cout << "YES" << '\n';

        for (int i = 0; i < n; i++)
        {
            if (i == n - 2)
            {
                cout << 'B';
            }
            else
                cout << 'R';
        }
        cout << '\n';
    }
}

int main()
{
    int l;
    cin >> l;
    while (l--)
        sol();
}