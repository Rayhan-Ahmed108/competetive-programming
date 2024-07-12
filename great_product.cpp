#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multiset<int> s;
    int i = 2;
    while (n != 1)
    {
        if (n % i == 0)
        {

            s.insert(i);
            n = n / i;
        }
        else
        {
            i++;
        }
    }

    int count = 0;

    for (auto it:s)
    {
        if (count != s.size() - 1)
            cout << it << 'x';
        else
            cout << it;
        count++;
    }
}