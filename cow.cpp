#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, temp, temp2, count = 0;
        cin >> a >> b;
        int s[a];
        for (int i = 0; i < a; i++)
        {
            cin >> s[i];
            if (i == b - 1)
            {
                int temp = s[i];
            }
        }
        for (int i = 0; i < b; i++)
        {
            if (s[i] > temp)
            {
                swap(s[i], temp);
                temp2 = i;
                break;
            }
        }
        for (int i = temp2; i < a; i++)
        {
            if (s[i] < temp)
                count++;
            else
                break;
        }
        if (temp2 == 0)
            cout << count << endl;
        else
            cout << count + 1 << endl;
    }
}