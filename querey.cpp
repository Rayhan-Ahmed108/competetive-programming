#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int a;
    cin >> a;
    vector<int> v1(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < a; i++)
    {

        int ans = lower_bound(v.begin(), v.end(), v1[i]) - v.begin();
        if (v1[i]==v[ans])
        {
            cout << "Yes" << ' ' << ans + 1 << '\n';
        }
        else
            cout << "No" << ' ' << ans + 1 << '\n';
    }
}
