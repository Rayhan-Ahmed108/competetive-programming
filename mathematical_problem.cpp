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
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] - 48 == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 1 && s.size() > 3)
        cout << "0" << '\n';
    else if (s.size() < 3 && (s[0] - 48) != 0)
        cout << s << '\n';
    else if (s.size() < 3 && s.size()>1 && (s[0] - 48) == 0)
        cout << s[1] << '\n';
    else if (s.size() == 3 && s[1] - 48 == 0)
        cout << min(((s[0] - 48) * (s[2] - 48)), ((s[0] - 48) + (s[2] - 48)))<<'\n';
    else
    {
        int ans = 1e9;
        for (int i = 0; i < s.size() - 1; i++)
        {
            int temp = (s[i] - 48) * 10 + s[i + 1] - 48;
            for (int j = 0; j < s.size(); j++)
            {
                if (j == i || j == i + 1)
                    continue;
                else if (s[j] - 48 == 1)
                    temp = temp * 1;
                else if (s[j] - 48 == 0)
                    temp = temp * 0;
                else
                    temp = temp + s[j] - 48;
            }
            ans = min(ans, temp);
        }
        cout << ans << '\n';
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}