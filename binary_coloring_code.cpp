#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    int p[32];
    for (int i = 0; i < 32; i++)
    {
        p[i] = 0;
    }

    cin >> t;
    while (t--)
    {

        long long int n;
        int temp = 0, count = 0, h = 0, temp1 = 0;

        cin >> n;

        for (int i = 0;; i++)
        {

            if (pow(2, i) >= n)
            {

                temp = pow(2, i);
                temp1 = i;

                break;
            }
            else
                count++;
        }

        cout << 31 << '\n';

        int f = temp - n;

        for (int i = count - 1; i >= 0; i--)
        {

            if (pow(2, i) <= f)
            {

                p[i] = -1;

                f = f - pow(2, i);
            }
            else
                p[i] = 0;
        }
        for (int i = 0; i < 32-1; i++)
        {

            if (i == temp1)
                cout << 1 << ' ';

            else
                cout << p[i] << ' ';
        }
        cout<<'\n';
    }
}