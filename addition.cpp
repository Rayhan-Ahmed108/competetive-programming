#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int temp=0;
        string s;
        cin >> s;
        if (s[s.size() - 1] == '9')
        {
            cout << "NO" << '\n';
        }
        else if (s.size() == 2 && s[0] - 48 == 1 && s[1] - 48 == 0)
            cout << "YES" << '\n';
        else
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == '0')
                {
                    temp = 1;
                    break;
                }
            }
            if (temp == 1)
            {
                cout << "NO" << '\n';
            }
            else
            {
                int d = ((s[0] - 48) * 10) + s[1] - 48;
                if (d >= 11 && d <= 19)
                {
                    cout << "YES" << '\n';
                }
                else
                    cout << "NO" << '\n';
            }
        }
    }
}