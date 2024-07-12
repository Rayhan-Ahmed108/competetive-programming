#include <bits/stdc++.h>
#include<map>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> m;

        int a, b, sum = 0;
        cin >> a >> b;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];

            m[v[i]]++;
        }
        for (auto it : m)
        {

            sum = sum + min(it.second, b);
        }
        cout << sum << '\n';
    }
}