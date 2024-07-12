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
#define pb                                \
    push_back;                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }
#define mp make_pair
const int mod = 1e9 + 7;
#define endl "\n"
void sol()
{
    int n, ans = 0;
    cin >> n;
    if(n>=1100)
    cout<<"YES"<<'\n';
    else{
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (n >= v[i])
        {
            for (int j = i; j >= 0; j--)
            {
                n = n - (n / v[j]) * v[j];
                if (n == 0)
                {
                    ans = 1;
                    break;
                }
                else if (n < 0)
                {
                    break;
                }
                
            }
        }
    }
    if (ans == 1)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}