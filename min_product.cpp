#include <iostream>
using namespace std;

bool isPossible(int a, int b, int c, int d)
{

    if (d < 0)
    {
        return false;
    }

    if (d == 0)
    {

        return true;
    }

    if (a == 0 && b == 0)
    {

        return false;
    }

    if (a > 0)
    {
        if (isPossible(a - 1, b, c, d - c))
        {
            return true;
        }
    }

    if (b > 0)
    {
        if (isPossible(a, b - 1, c, d - 1))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;

        cin >> a;

        cin >> b;

        cin >> c;

        cin >> d;
        if (isPossible(a, b, c, d))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
       
    }
}
