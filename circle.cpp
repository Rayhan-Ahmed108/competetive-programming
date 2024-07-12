#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }
        long long int sum = 0, count = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > count)
            {
                count = v[i];
                
            }
            sum = sum + v[i];

            if (sum - count == count)
            {
                ans++;
            }
        }
        cout << ans << '\n';
    }
}