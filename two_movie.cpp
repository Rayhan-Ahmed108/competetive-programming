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

    int n,a=0,b=0,k=0,l=0;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v1[i] > v2[i])
            a+=v1[i];
        else if (v1[i] < v2[i])
            b+=v2[i];
        else if (v1[i] == 1)
            k++;
        else if (v1[i] == -1)
            l++;
    }
    while (k--)
    {
        if (a > b)
            b++;
        else
            a++;
    }
    while (l--)
    {
        if (a > b)
            a--;
        else
            b--;
    }
    cout << min(a, b) << '\n';
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}