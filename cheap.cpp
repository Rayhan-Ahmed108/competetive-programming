#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double temp = d / b;
    if (temp >= c)
    {
        cout << a * c << endl;
    }
    else
    {
        cout << ((a / b) * d) +min((a % b) * c,d) << endl;
    }
}