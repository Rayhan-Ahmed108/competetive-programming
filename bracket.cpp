#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        int count = 0;
        cin >> s;
        stack<char> s1;
        stack<char> s2;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '(')
            {
                s1.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (s1.empty)
                {
                    count++
                }
                else
                    s1.pop();
            }
            else if (s[i] == '[')
            {
                s2.push(s[i]);
            }
            else
            {
                if (s2.empty)
                {
                    count++
                }
                else
                    s2.pop();
            }
            count << count + s1.size() + s2.size() << '\n';
        }
    }
}