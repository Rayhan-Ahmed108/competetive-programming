#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum = 0, ans = 0;
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        sum = sum + v1[i];
    }
    vector<int> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    sort(v2.begin(), v2.end());
    ans = ans + v2[n - 1] + v2[n - 2];
    if (ans >= sum)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}