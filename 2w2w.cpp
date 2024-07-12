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
int one(const string &s)
{
    unordered_map<char, int> countMap;
    int left = 0;
    int minL = INT_MAX;
    int uC = 0;

    for (int right = 0; right < s.size(); ++right)
    {
        char rightChar = s[right];
        countMap[rightChar]++;

        if (countMap[rightChar] == 1)
        {
            uC++;
        }

        while (uC == 3)
        {
            minL = min(minL, right - left + 1);
            char lc = s[left];
            countMap[lc]--;
            if (countMap[lc] == 0)
            {
                uC--;
            }
            left++;
        }
    }

    return (minL == INT_MAX) ? -1 : minL;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int result = one(s);
        if (result != -1)
        {
            cout << result << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}