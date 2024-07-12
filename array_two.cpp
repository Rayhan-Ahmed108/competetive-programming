#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        int t;
        cin >> t;

        int a[t];

        for (int i = 0; i < t; i++)
        {

            cin >> a[i];
        }
        sort(a, a + t);

        int temp = a[0], h = 0, g = 0;

        for (int i = 1; i < t; i++)
        {

            if (a[i] % temp != 0)
            {

                g = a[i];
                int j;

                for ( j = i; j < t; j++)
                {
                    if (a[j] % g != 0 && a[j] % temp != 0)
                    {
                        h = 1;
                        break;
                    }
                }
                i = j;
            }
        }
        if (h == 1)
        {
            cout << "No" << '\n';
        }
        else
            cout << "Yes" << '\n';
    }
}