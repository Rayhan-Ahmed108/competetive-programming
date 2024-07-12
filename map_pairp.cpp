#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    long long int n, temp = 1, temp1 = 0;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    sort(v.begin(), v.end());
    cout << v[n - 1] - v[0] << ' ';
    if (m.size() == 1)
    {
        temp1 = temmp1 + (n - 1) * (n - 2) / 2;
        cout << temp1;
    }
    else
    {
        for (auto it : m)
        {
            if (it.first == v[0] || it.first == v[n - 1])
            {
                temp = temp * it.second;
            }
        }
        cout << temp;
    }
}