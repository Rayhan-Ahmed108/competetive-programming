#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, odd = 0;
        cin >> a >> b;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            if (v[i] % 2 != 0)
            {
                odd++;
            }
        }
        if (odd == a && odd % 2 == 0 && b % 2 == 0 || b == a && odd % 2 == 0 || odd == 0 || odd==a && b%2==0 )
        {
            cout << "No" << '\n';
        }
        else
            cout << "Yes" << '\n';
    }
}