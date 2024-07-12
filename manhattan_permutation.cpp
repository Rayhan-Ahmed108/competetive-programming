#include <bits/stdc++.h>
using namespace std;
void sol()
{
    long long int a, b, temp1, temp, i, j;
    cin >> a >> b;
    long long int s[a];
    for (int i = 1; i <= a; i++)
    {
        s[i - 1] = i;
    }
    if (a % 2 == 0)
    {
        temp = a / 2;
        if (temp * temp * 2 < b)
            cout << "No" << '\n';
        else if (b % 2 != 0)
            cout << "No" << '\n';
        else
        {
            cout << "Yes" << '\n';
            for (i = 1, j = a; i <= a; i++, j--)
            {
                if ((abs(i - j) * 2) <= b)
                {
                    swap(s[i - 1], s[j - 1]);
                    b = b - abs(i - j) * 2;
                }
                else
                    j = j + 1;
            }
            for (i = 0; i < a; i++)
            {
                cout << s[i] << ' ';
            }
            cout << '\n';
        }
    }
    else if (a % 2 != 0)
    {
        temp1 = (a / 2);
        if (((temp1 * (temp1 + 1)) * 2) < b)
            cout << "No" << '\n';
        else if (b % 2 != 0)
        {
            cout << "No" << '\n';
        }
        else
        {
            cout << "Yes" << '\n';
            for (i = 1, j = a; i <= a; i++, j--)
            {
                if ((abs(i - j) * 2) <= b)
                {
                    swap(s[i - 1], s[j - 1]);
                    b = b - abs(i - j) * 2;
                }
                else
                    j = j + 1;
            }
            for (i = 0; i < a; i++)
            {
                cout << s[i] << ' ';
            }
            cout << '\n';
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}