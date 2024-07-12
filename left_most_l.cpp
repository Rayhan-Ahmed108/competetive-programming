#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
            cin >> v[i];

        int temp = v[b - 1];
        sort(v.begin(), v.end(),greater<int>());

        int temp1 = 0, result = 0;

        for (int i = 0; i < c; i++)
        {
            if (v[i] == temp)
            {
                temp1 = 1;
                break;
            }
        }

        for (int i = c; i < a; i++)
        {
            if (v[i] == temp)
            {
                result++;
            }
        }

        if (temp1 == 1 && result == 0)
        {
            cout << "YES" << '\n';
        }
        else if (temp1 == 1)
        {
            cout << "MAYBE" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
