#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void sol()
{
    ll n, y = 0, temp = 0, temp1 = 0;
    cin >> n;
    for (int i = 1; i * i * i <= n; i++)
    {
        for (int j = 1; j * j * j <= n; j++)
        {
            if (n - pow(i, 3) == pow(j, 3))
            {
                y = 1;
                temp = i;
                temp1 = j;
                break;
            }
        }
        if (y == 1)
            break;
    }
    if (y == 1)
    {
        yes;
    }
    else
        no;
}

int main()
{
    FAST_IO;
    int h;
    cin >> h;
    while (h--)
        sol();
    return 0;
}
