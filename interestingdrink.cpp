#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    long long int d;
    cin>>d;
    int s[d];
    for(int i=0;i<d;i++)
    {
        int count=0;
        cin>>s[i];
        for(int j=0;j<n;j++)
        {
            if(s[i]>=a[j])
                count++;
        }
       cout<<count<<endl;
    }

}