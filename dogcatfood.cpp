#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, temp=0;
        cin >> n >> a;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        for (auto l : m)
        {
            if (l.second >= a)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 1)
            cout << a - 1 << endl;
        else
            cout << n << endl;
    }
    return 0;
}