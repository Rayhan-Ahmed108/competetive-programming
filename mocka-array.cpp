#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0, temp1 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {

            if (a[i] > a[i + 1])
            {
                temp1 = i + 1;
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            cout << "Yes" << '\n';
        else
        {
            int count = 0;
    

            for (int i = temp1; i < n - 1; i++)
            {
                if (a[i] <= a[i + 1] && a[0] >= a[i+1])
                {
                    continue;
                }
                else
                    count = 1;
            }
            if (count == 1)
            {
                cout << "No" << '\n';
            }
            else
                cout << "Yes" << '\n';
        }
    }
}