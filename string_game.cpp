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
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' && (i + 1) % 2 != 0)
            cout << 'b';
        else if (s[i] != 'a' && (i + 1) % 2 != 0)
            cout << 'a';
        else if (s[i] == 'z' && (i + 1) % 2 == 0)
            cout << 'y';
        else if (s[i] != 'z' && (i + 1 )% 2 == 0)
            cout << 'z';
    }
    cout << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}