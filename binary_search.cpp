#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    long long int lo = 0, hi = v[0] * a, mid;

    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            result = result + mid / v[i];
        }
        if (result == a)
        {
            cout << mid;
            return 0;
        }
        else if (result < a)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return 0;
}
