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

    long long int n, temp = 0, c = 0, result = 1, ans = 0, negative = 0, positive = 0,i=0,j=0;
    cin >> n;
    vector<long long int> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < 0)
            negative++;
        else if (v[i] == 0)
            ans = 1;
        else
            positive++;
    }
    
   
                    

int main()
{
    int t;
    cin >> t;
    while (t--)
        sol();
}