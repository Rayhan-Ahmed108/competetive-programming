#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
        }
        int temp = -1;

        for (int i = 0; i < n - 1; i++)
        {

            if (temp < a[i])
            {

                temp = a[i];
            }
        }
        cout << temp << '\n';
    }
}
