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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            v1.push_back(v[i]);
        else
            v2.push_back(v[i]);
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    int ans = min(v1.size(), v2.size());
    
    for(int i=0;i<ans;i++){
        if(v1[i]>=v2[i]){
            
        }


     }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}