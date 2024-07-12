#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
   long long int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    long long int cs = 0;
    for (int i = 0; i < k; ++i)
    {
        cs += v[i];
    }

    int ms = cs;
    int mi = 0;

    for (int i = 1; i <= n - k; ++i)
    {
        cs = cs - v[i - 1] + v[i + k - 1];
        if (cs < ms)
        {
            ms = cs;
            mi = i;
        }
    }
    cout << mi + 1 << endl;

    return 0;
}
