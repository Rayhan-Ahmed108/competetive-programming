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
    stack<char> stk;
    int count = 0, temp = 0;

    if (s[0] == ')')
    {
        cout << "NO" << endl;
        return;
    }

    for (char c : s)
    {
        if (c == '(')
        {
            stk.push(c);
        }
        else if (c == ')')
        {
            if (!stk.empty() && stk.top() == '(')
            {
                stk.pop();
            }
            else if (count > 0)
            {
                count--;
            }
            else
            {
                temp = 1;
                break;
            }
        }
        else count++;
    }

    if (temp == 1 || !stk.empty() && count < stk.size())
    {
        cout << "NO" << endl;
    }
    else if (stk.empty() && count % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else if (!stk.empty() && count >= stk.size() && (count - stk.size()) % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    FAST_IO;
    int x;
    cin>>x;
    while (x--)
    {
        sol();
    }
    return 0;
}
