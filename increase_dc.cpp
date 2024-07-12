#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long int n, result = INT32_MAX, sum = 0, ans = 0;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long int> v1(n + 1);
        for (long long int i = 0; i < n + 1; i++)
        {
            cin >> v1[i];
        }
        long long int temp = v1[n];
        for (long long int i = 0; i < n; i++)
        {
            sum += abs(v1[i] - v[i]);
            if (temp >= v[i] && temp <= v1[i] || temp <= v[i] && temp >= v1[i])
            {
                ans = 1;
            }
            else
            {
                result = min(result, min(abs(temp - v[i]), abs(temp - v1[i])));
            }
        }
        if (ans == 1)
        {
            cout << sum + 1 << '\n';
        }
        else
            cout << sum + result + 1 << '\n';
    }
}