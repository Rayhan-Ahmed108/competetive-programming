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

    ll a, b;
    cin >> a >> b;
    ll temp = min(a, b), ans = max(a, b);
    if (a == b && a != 0)
        cout << "NO" << '\n';
    else if (a * 2 == b || b * 2 == a)
        cout << "YES" << '\n';
    else if (temp * 2 < ans && temp != 0)
        cout << "NO" << '\n';
    else if (a % 3 == 0 && b % 3 == 0)
        cout << "YES" << '\n';
    else
    cout<<"NO"<<'\n';    
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}