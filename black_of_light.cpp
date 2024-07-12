#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        auto it_end = s.end();
        auto it_last = prev(s.end());
        int l = *it_last;
        int sl = *prev(it_last);
        if ((l - sl) % 2 == 0)
        {
            cout << ((l - sl) / 2) + sl << '\n';
        }
        else
            cout << ((l - sl) / 2) + sl + 1 << '\n';
    }
}
