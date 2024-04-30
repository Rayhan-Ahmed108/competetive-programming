#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
string s,c;
cin>>s>>c;
int f=c.size();
int d[50]={0},sum=0;

for(int i=0;i<f;i++)
{
for(int j=0;j<s.size();j++)
{
if(c[i]==s[j])
{
    d[i]=j+1;
}
}
}
for(int i=0;i<f-1;i++)
{
    sum=sum+abs(d[i]-d[i+1]);
}

cout<<sum<<endl;
}
}