#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,count=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
for(int i=1;i<n;i+=2)
{
    if(a[i]-a[i-1]==1||a[i-1]%2==a[i]%2)
    count++;
}
if(count==n/2)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}