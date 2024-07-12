#include <bits/stdc++.h>
#include <map>
#include <set>
#include <limits.h> // Include limits.h for INT_MAX
using namespace std;
#define ll long long int
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define pb push_back
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
    int ans = INT_MAX, temp = 0, temp1 = 0, temp2 = 0, one = -1, two = -1, three = -1;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            temp = 1;
            one = i;
        }
        if (s[i] == '2')
        {
            temp1 = 1;
            two = i;
        }
        if (s[i] == '3')
        {
            temp2 = 1;
            three = i;
        }
        if (temp == 1 && temp1 == 1 && temp2 == 1)
        {
            ans = min(ans, (max({one, two, three}) - min({one, two, three})) + 1);
        }
    }
    if (ans == INT_MAX)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << ans << '\n';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}
