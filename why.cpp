#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b,j,count=0;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++)
cin>>s[i];
for(int i=0,j=a-1;b>=0;i++,j--)
{
if(s[i]<s[j])
{
s[j]=s[j]-s[i];
b=b-s[i]*2;
s[i]=0;
j=j+1;
if(b<0)
break;
else
count++;
}
else if(s[i]>s[j])
{
s[i]=s[i]-s[j];
b=b-s[j]*2;
s[j]=0;
i=i-1;
if(b<0)
break;
else
count++;
}
else
{
s[j]=s[i]-1;
b=b-(s[i]*2)-1;
s[i]=0;
j=j+1;
if(b<0)
break;
else
count++;
}
}
cout<<count<<endl;
}
}