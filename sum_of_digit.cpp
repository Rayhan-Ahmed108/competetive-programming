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
#define FAST_IO                           \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }
#define pb push_back
#define mp make_pair
const int mod = 1e9 + 7;
#define endl "\n"

vector<int> pcs(int max_n)
{
    vector<int> sd(max_n + 1, 0);
    for (int i = 1; i <= max_n; ++i)
    {
        int temp = i, sum = 0;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        sd[i] = sd[i - 1] + sum;
    }
    return sd;
}

void sol(const vector<int> &sd)
{
    int n;
    cin >> n;
    cout << sd[n] << '\n';
}

int main()
{
    FAST_IO;
    int x;
    cin >> x;

    int max_n = 1000000;
    vector<int> sd = pcs(max_n);

    while (x--)
        sol(sd);
}
