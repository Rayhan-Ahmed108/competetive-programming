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
    long long int a, b, c, sum = 0, count = 0, j = 0;
    cin >> a >> b >> c;
    vector<long long int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < a; i++)
    {
        sum = sum + v[i];
        while (sum > c)
        {
            sum -= v[j];
            j++;
        }
        if (sum >= b && sum <= c)
        {
            sum = 0;
            count++;
            j = i + 1;
        }
    }

    cout << count << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}