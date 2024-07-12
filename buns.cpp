#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c,temp2=0,ans=0;
        cin >> a >> b >> c;
        if (b >= c)
            cout << b * a << '\n';
        else
        {
            if (a >= c - b){
            temp2 = b * (b + 1) / 2;
            ans = c * (c + 1) / 2;
            cout << ans - temp2 + (a - (c - b))*b << '\n';
            }
            else
            {

                long long int u = c * (c + 1) / 2;
                long long int y = (c - a) * (c - a + 1) / 2;
                cout << u - y << '\n';
            }
        }
    }
}
