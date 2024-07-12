#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        ll a, b, c, d, temp = 0, temp1;
        cin >> a >> b >> c >> d;
        if (c * 2 <= d)
        {

            cout << ((a + b) * c) << '\n';
        }
        else if (d * 2 <= c)
        {
            temp2 = (max(a, b) * d) + (abs(a - b) * c);
            cout << min(temp2, (min(a, b) * d + (abs(a - b) * c))) << '\n';
        }
        else
        {
            temp = ((d * min(a, b)) + (abs(a - b) * c));
            temp1 = (a + b) * c;

            cout << min(temp, temp1) << '\n';
        }
    }
}