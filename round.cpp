#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int a, b, ans = 0,count=0;
        cin >> a >> b;
        map<char, int> m;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        for (auto it : m)
        {
            if (it.second >= b)
            {
                count++;
            }
            else
                ans=ans+it.second;
        }
        int ans1 = count * b;
        int result = 7 * b - ans1 - ans;
        cout << result << '\n';
    }
}