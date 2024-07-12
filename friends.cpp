#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    int temp = -1, temp1 = 0;
    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (v[i] % b == 0)
        {
            if (v[i] / b >= temp)
            {
                temp = v[i] / b;
                temp1 = i + 1;
            }
        }
        else
        {
            if ((v[i] / b) + 1 >= temp)
            {
                temp = v[i] / b + 1;
                temp1 = i + 1;
            }
        }

        {
        }
    }
    cout << temp1;
}