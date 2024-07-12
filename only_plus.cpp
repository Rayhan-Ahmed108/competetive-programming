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

    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    for (int i = 0; i < 5; i++)
    {
        a[0] = a[0] + 1;
        sort(a, a + 3);
    }
    cout << a[0] * a[1] * a[2] << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}