#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,count=0,ans=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i++)
{
count++;
if(a[i]!=a[i+1])
{
    ans=ans+count/3;
    count=0;
}

}
cout<<ans<<endl;
}


}