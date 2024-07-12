#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long int n, a;
    cin >> n >> a;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    long long int lo = 0, hi = v[0] * a, mid;

    long long int rs = LLONG_MAX;

    while (lo <= hi)
    {
        mid = lo + ((hi - lo) / 2);
        long long int result = 0;
        for (long long int i = 0; i < n; i++)
        {
            result += (mid / v[i]);
        }
        if (result >= a)
        {
            rs = min(rs, mid);
            hi = mid - 1;
        }
        if (result < a)
        {
            lo = mid + 1;
        }
    }
    cout << rs << "\n";
    return 0;
}
