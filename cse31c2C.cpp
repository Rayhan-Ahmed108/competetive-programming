#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,ans=0,sum=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            a[j]=0;
        }
    }
}        
for(int i=0;i<n;i++)
{
    if(a[i]>=0)
    sum=sum+a[i];
    else
    ans=ans+a[i];
}    

cout<<sum<<ans;
cout<<endl;
}
}




