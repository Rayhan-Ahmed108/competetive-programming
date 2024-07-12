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

    int n, i, j, ans = 0, temp = 0,result=0;
    cin >> n;
    string s;
    cin >> s;

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        if (s[i] == s[j])
        {
            temp = i;
            ans = j;
            result=1;
            break;
        }
    }

    if (result == 1 && n % 2 == 0)
        cout << ans - temp + 1 << '\n';
    else if (result == 1 && n % 2 != 0)
        cout << ans - temp + 1 << '\n';
    else if (result != 1 && n % 2 == 0)
        cout << 0 << '\n';
    else if (result != 1 && n % 2 != 0)
        cout << ans-temp+1 << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}