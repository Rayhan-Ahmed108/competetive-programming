#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        ll a, b, count = 0;
        cin >> a >> b;
        for (int i = 0;; i++)
        {
            if (pow(2, i) > b)
            {
                break;
            }
            else
                count++;
        }

        cout << count-1<< '\n';
    }
}