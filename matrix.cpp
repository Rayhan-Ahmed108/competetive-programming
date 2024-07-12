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
#define endl "\n";
void sol()
{
    long long int a, b;
    cin >> a >> b;
    long long int s[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            vector<long long int> v;
            if (i != a - 1)
                v.push_back(s[i + 1][j]);
            if (i != 0)
                v.push_back(s[i - 1][j]);
            if (j != b - 1)
                v.push_back(s[i][j + 1]);
            if (j != 0)
                v.push_back(s[i][j - 1]);
            sort(v.rbegin(), v.rend());
            if (!v.empty() && v[0] < s[i][j])
                s[i][j] = v[0];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << s[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}