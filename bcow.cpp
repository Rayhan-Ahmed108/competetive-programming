#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b,temp,temp1,p,count=0;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++)
{
cin>>s[i];
if(i==b-1)
temp=s[i];
}
for(int i=0;i<b-1;i++)
{
    if(s[b-1]<s[i])
    {
        temp1=s[i];
        s[i]=s[b-1];
        s[b-1]=temp1;
        p=i;
        break;

    }
}
for(int i=p+1;i<a;i++)
{
if(s[p]>s[i])
count++;
else
break;
}
if(p!=0)
cout<<count+1<<endl;
else
cout<<count<<endl;
}
}