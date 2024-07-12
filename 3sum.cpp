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

    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> freq(10, 0);
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

            freq[v[i] % 10]++;
        if (freq[v[i] % 10] <= 3)
        {
            arr.push_back(v[i] % 10);
        }
    }

for (int i = 0; i < arr.size() - 2; i++)
{
    for (int j = i + 1; j < arr.size() - 1; j++)
    {
        for (int k = j + 1; k < arr.size(); k++)
        {
            if ((arr[i] + arr[j] + arr[k]) % 10 == 3)
            {
                ans = 1;
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
    int t;
    cin >> t;
    while (t--)
        sol();
}