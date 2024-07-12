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
    vector<int> v{10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};
    int n,ans=0,j;
    cin >> n;
    if(n==1){
        cout<<"YES"<<'\n';

    }
    else{
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int result=n;
        if (result % v[i] == 0)
        {
            
            for (j = i; j >= 0; j--)
            {
                if (result % v[j] == 0)
                {
                    result = result/v[j];
                    j = j + 1;
                }
            }
            if (result == 1)
            {
                ans = 1;
                break;
            }
        }
    }
    if(ans==1){
        cout<<"YES"<<'\n';
        
    }
    else
    cout<<"NO"<<'\n';
}
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();
}