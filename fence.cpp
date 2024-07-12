#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int temp = 1e18;
    int a, b, temp1, i;
    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }

    long long int k = 0, sum = 0;
    for (i = 0; i < a - b; i++)
    {
        sum = sum + v[i];
        if ((i + 1) % b == 0)
        {
            if (sum <= temp)
            {
                temp = sum;
                temp1 = i;
            }
            i = k + 1;
            k = k + 1;
            sum = 0;
        }
    }
    cout << temp1 + 1 << endl;
}