// NEVER GIVE UP
#include <bits/stdc++.h>
using namespace std;
int main()

{
    long long int t, n, temp;
    cin >> n >> t;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (a[t - 1] == a[t])
       cout<<-1;
    else
    {
        cout<<a[t-1];
    }
}