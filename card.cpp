#include<iostream>
using namespace std;
int main()
{
int n,count=0,ans=0;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++)
{
    if(s[i]=='n')
    count++;
    else if(s[i]=='r')
    ans++;
}
if(count>0)
for(int i=0;i<count;i++)
{
    cout<<1<<" ";
}
if(ans>0)
{
    for(int i=0;i<ans;i++)
    cout<<0<<" ";
}
cout<<endl;



}