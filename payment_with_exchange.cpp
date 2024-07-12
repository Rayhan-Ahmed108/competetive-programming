#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a * c + b < d)
            cout << "NO" << '\n';
        else if (a * c + b == d || a * c == d)
            cout << "YES" << '\n';
        else if (a * c < d && a * c + d >= d)
            cout << "YES" << '\n';
        else if (a * c > d)
        {
            if (d % c <= b)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}