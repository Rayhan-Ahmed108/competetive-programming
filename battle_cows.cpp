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
    int a, b,mx=-1,temp=0,p;

    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
        mx = max(v[i], mx);
    }
    int main = v[b - 1];
    for (int i = 0; i < b; i++)
    {
        if (v[i] > main)
        {
            temp = 1;
            p = i;
            break;
        }
    }
    
    if (mx == main)
        cout << a - 1 << '\n';
    else if (temp == 0)
    {
        int count = 0;
        swap(v[0], v[b - 1]);
        for (int i = 1; i < a; i++)
        {
            if (v[i] <= v[0])
                count++;
            else
                break;
        }
        cout << count << '\n';
    }
    else if (temp == 1 && p == 0)
    {
        swap(v[p], v[b - 1]);
        int count = 0;
        for (int i = 1; i < b; i++)
        {
            if (v[i] <= v[0])
                count++;
            else
                break;
        }
        cout << count << '\n';
    }
    else if (temp == 1 && p > 0)
    {
        int u = p - 1, count = 0;
        swap(v[p],v[b-1]);
        for (int i = p + 1; i < b; i++)
        {
            if (v[i] <= main)
                count++;
            else
                break;
        }
        cout << max(u, count + 1)<<'\n';
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}