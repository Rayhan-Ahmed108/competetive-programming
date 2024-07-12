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
#define FAST_IO
#define pb push_back;                     \
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
    vector<ll> v;
    set<ll>s;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            s.insert(i);
            n /= i;
        }
    }
    for (auto prime : s)
    {
        cout << prime << " ";
    }
}

int main()
{

    sol();
}