#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0, ans = 0, temp;
        string s;
        cin >> s;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '1')
                count++;
            else
                ans++;
        }
        temp = min(count, ans);
        if (temp == ans + count || temp % 2 == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }
}