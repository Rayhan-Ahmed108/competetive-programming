#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, temp, maxi = -1,ans=0,temp1;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            temp = i;
            break;
        }
        
    }
    for (int i = n-1; i >= temp; i--)
    {
        if (v[i] == 0)
        {
            temp1=i;
            break;
        }
       
    }
    for (int i = n; i >= temp; i--)
    {
        if (v[i] == 1)
        {
            count++;
        }
    }
    cout << count + maxi;
}
