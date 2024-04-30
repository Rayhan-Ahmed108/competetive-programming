#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
string s,p;
cin>>n;
for(int i=0;i<n*2;i++)
{
for(int j=0;j<n*2;j++)
{
if(j/2%2!=i/2%2)
cout<<'.';
else
cout<<'#';
}
cout<<'\n';
}
}
}