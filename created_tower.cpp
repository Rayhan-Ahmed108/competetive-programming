#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, bool> memo;

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

    string key = to_string(a) + "|" + to_string(b) + "|" + to_string(d);
    if (memo.find(key) != memo.end())
    {
        return memo[key];
    }

    if (a == 0 && b == 0)
    {
        return false;
    }

    bool result = false;

    if (a > 0)
    {
        result = result || isPossible(a - 1, b, c, d - c);
    }

    if (b > 0)
    {
        result = result || isPossible(a, b - 1, c, d - 1);
    }

    memo[key] = result;
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        if (isPossible(a, b, c, d))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
