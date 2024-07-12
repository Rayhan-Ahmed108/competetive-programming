#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int count=0,ct=0;
string s;
cin>>s;
for(int i=0;i<s.size()-1;i++)
{
    int temp=s[i]-48;
    int temp1=s[i+1]-48;
if(temp==0&&temp1==1)
{
    count++;
    break;
}
}
for(int i=0;i<s.size()-1;i++)
{
    if(s[i]=='1'&&s[i+1]=='0'||s[i]=='0'&&s[i+1]=='1')
    ct++;
}
cout<<ct-count+1<<'\n';
}
}