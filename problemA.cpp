#include<iostream>
using namespace std;
int main()
{
int n,sum=0,count=0,ans=0,result=0,i;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum=sum+a[i];
}
int d=sum/3;
if(sum%3!=0)
cout<<-1<<endl;
else
{
for(int i=0;i<n;i++)
{
ans=ans+a[i];
if(ans==d)
{
    count++;
    ans=0;
}

}
if(count!=3)
cout<<-1<<endl;
else
{
for(int i=0;i<n-1;i++)
{
    result=result+a[i];
if(result==d)
{ 
    cout<<i+1<<" ";
    result=0;
}
}
}
cout<<endl;
}

return 0;

}
