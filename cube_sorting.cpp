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
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
        {
            count = 1;
            break;
        }
    }

    if (count == 1)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}