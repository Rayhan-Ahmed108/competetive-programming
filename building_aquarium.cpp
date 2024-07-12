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
    long long int a, b;
    cin >> a >> b;
    vector<long long int> v(a);
    for (int i = 0; i < a; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    long long int lo = 0, hi = 2000000010;
    while (lo < hi)
    {

        long long int mid = lo + (hi - lo + 1) / 2;
        long long int sum = 0;
        for (int i = 0; i < a; i++)
        {
            sum = sum + max(mid - v[i], 0LL);
        }
        if (sum <= b)
            lo = mid;
        else
        {
            hi = mid - 1;
        }
    }
    cout << lo << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}