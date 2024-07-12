#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multiset<int> s;

    while (n != 0)
    {
        if (n >= 500)
        {
            s.insert(500);
            n = n - 500;
        }
        else if (n >= 100)
        {
            s.insert(100);
            n = n - 100;
        }
        else if (n >= 50)
        {
            s.insert(50);
            n = n - 50;
        }
        else if (n >= 10)
        {
            s.insert(10);
            n = n - 10;
        }
        else if (n >= 5)
        {
            s.insert(5);
            n = n - 5;
        }
        else if (n >= 1)
        {
            s.insert(1);
            n = n - 1;
        }
    }
    for (auto it : s)
        cout << it << ' ';
}
