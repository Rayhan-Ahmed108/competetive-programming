#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int a, b, temp1 = 0, count = 0;
        cin >> a >> b;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        int temp = v[b - 1];
        if (b == 1)
        {
            for (int i = 1; i < a; i++)
            {
                if (v[0] < v[i])
                {
                    break;
                }
                else
                    count++;
            }
            cout << count << '\n';
        }
        else
        {
            int p = 0;

            for (int i = 0; i < a; i++)
            {
                if (v[i] > temp)
                {
                    swap(v[i], v[b - 1]);
                    temp1 = i;
                    break;
                }
                else
                    count++;
            }
            for (int i = temp + 1; i < a; i++)
            {
                if (v[i] > temp)
                {
                    break;
                }
                else
                    p++;
            }
            if (temp1 != 0)
            {
                p = p + 1;
            }
            cout << max(p, count) << '\n';
            // for (int i = temp1 + 1; i < b; i++)
            // {
            //     if (v[i] > temp)
            //     {
            //         break;
            //     }
            //     else
            //         count++;
            // }
            // if(b==1){
            //     cout<<temp1-1<<'\n';
            // }
            // else if (temp1 == 0)
            // {
            //     int ans = max(count, temp1 - 1);

            //     cout << ans << '\n';
            // }
            // else
            // {
            //     int ans = max(count + 1, temp1 - 1);

            //     cout << ans << '\n';
            // }
            // }
        }
    }
}