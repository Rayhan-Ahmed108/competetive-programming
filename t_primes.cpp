#include <bits/stdc++.h>
long long int p[1000005] = {0};
using namespace std;
void sol(long long int n)
{
    int d=sqrt(n);
    for (long long int i = 3; i <= d; i += 2)
    {
        if (p[i] == 0)
        {
            for (long long int j = (i * i); j <= n; j += i)
            {
                p[j] = 1;
            }
        }
    }
}
int main()
{
    sol(1000005);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n;
        m = sqrt(n);
        if (n == 1)
            cout << "NO" << '\n';
        else if ((m * m) == n)
        {
            if (m % 2 == 0 && m != 2)
                cout << "NO" << '\n';
            else
            {
                if (p[m] == 0)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}
