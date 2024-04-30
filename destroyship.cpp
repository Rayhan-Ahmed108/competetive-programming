#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++)
cin>>s[i];
int count=0,j;
for(int i=0,j=a-1;i<j;i++,j--)
{
if(s[i]>=s[j])
{
s[i]=s[i]-s[j];
s[j]=0;
b=b-s[j]*2;
if(b>0)
{
    count++;
    i=i-1;
}
else
 break;
}
else if(s[i]<s[j])
{
s[j]=s[j]-s[i];
s[i]=0;
b=b-s[i]*2;
if(b+1>0)
{
    count++;
    j=j+1;
}
else 
break;
}
}
cout<<count<<endl;
}
return 0;
}