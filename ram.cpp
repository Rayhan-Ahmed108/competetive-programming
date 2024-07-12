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

    long long int a, b;
    cin >> a >> b;

    long long int ans = ((a - 1) * b) + 1;
    cout << ans << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}