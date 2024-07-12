#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n-1; i++)
        {
            cin >> v[i];
            temp = temp ^ v[i];
        }
        cout << temp;
    }
}