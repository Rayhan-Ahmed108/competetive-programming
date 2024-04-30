#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b,temp,temp1;
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
        break;

    }
}
cout<<s[b-1]<<endl;

}
}