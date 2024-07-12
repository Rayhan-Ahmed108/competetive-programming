#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c <= d && c * 2 >= d)
        {
            int temp = min(a, b) * d + abs(a - b) * c;
            int temp1 = (a + b) * c;
            cout << min(temp, temp1) << '\n';
        }
        else if (c <= d && c * 2 < d)
        {

            int temp = (a + b) * c;

            int temp1 = (a + b) * c;

            cout << min(temp, temp1) << '\n';
        }
        else if (c > d && d * 2 <= c)
        {

            int temp = (a + b) * d;

            int temp1 = (a + b) * c;

            cout << min(temp, temp1) << '\n';
        }
        else if (c > d && d * 2 >= c)
        {

            int temp = min(a, b) * d + abs(a - b) * c;
            int temp1 = (a + b) * c;
            cout << min(temp, temp1) << '\n';
        }
    }
}