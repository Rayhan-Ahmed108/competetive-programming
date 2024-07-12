#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, sum = 0, p = 0;
        cin >> a;

        vector<int> v1(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v1[i];
        }

        vector<int> v2(a + 1);

        for (int i = 0; i < a + 1; i++)
        {

            cin >> v2[i];
        }

        auto ans = lower_bound(v1.begin(), v1.end(), v2[a]);

        // int temp = v1[ans - v1.begin()];

        // for (int i = 0; i < a; i++)
        // {

        //     sum = sum + abs(v1[i] - v2[i]);
        // }
        // for (int i = 0; i < a; i++)
        // {

        //     if (v2[a] >= v1[i] && v1[i] >= v2[i])
        //     {
        //         p = 1;
        //     }
        // }
        // if (p == 1)
        // {
        //     cout << sum + 1 << '\n';
        // }
        // else
        //     cout << sum + abs(temp - v2[a]) + 1 << '\n';
        cout<<ans;
    }
}
