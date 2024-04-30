#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b,temp1,p,count=0;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++)
{
cin>>s[i];
}
int temp=s[b-1];
for(int i=0;i<b-1;i++)
{
    if(temp<s[i])
    {
        
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
