#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
int d=s.size();
long long int sum=0,one=0;
for(int i=0;i<d;i++)
{
if(s[i]=='1')
one++;
else
{
if(one>0)
sum=sum+one+1;
}
}
cout<<sum<<'\n';
}
}