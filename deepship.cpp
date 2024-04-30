#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,count=0,ans=0;
cin>>a;
int s[a];
for(int i=0;i<a;i++)
{
    cin>>s[i];
}
int f=s[0],d=s[a-1];
for(int i=0;i<a;i++)
{
    if(s[i]==f)
    count++;
    else
     break;
}
for(int i=a-1;i>=0;i--)
{
    if(s[i]==d)
    ans++;
    else
    break;
}
if(ans==a)
cout<<-1<<endl;
else if(ans<count)
cout<<ans<<endl;
else
cout<<count<<endl;
}
}