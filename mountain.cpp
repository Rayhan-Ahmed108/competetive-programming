#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ans = INT32_MIN, result = 0, count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            count++;
            if (count > ans)
            {
                ans = count;
                result = i + 1;
            }
        }
        else if (s[i] == '-')
        {
            count--;
            if (count > ans)
            {
                ans = count;
                result = i + 1;
            }
        }
    }
    cout << result << endl;
}