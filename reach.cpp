#include <bits/stdc++.h>
using namespace std;

int ans(int n)
{
    if (n == 1)
        return 1;
    if (n<10)
        return 0;
     ans(n / 10); 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d = ans(n);
        if (d == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0; // Added return statement to indicate successful termination
}
