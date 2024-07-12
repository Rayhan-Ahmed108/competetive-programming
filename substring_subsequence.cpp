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
    int result=0;

    string a, b;
    cin >> a >> b;
    for (int i = 0; i < b.size(); i++)
    {
        int u = 0,ans=i;
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == b[ans])
            {
                
                u++;
                ans++;
            
            }
        }
        result=max(u,result);
    }
    cout << a.size() - result + b.size()<< '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}