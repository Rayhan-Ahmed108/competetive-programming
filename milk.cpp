#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b,c;
cin>>a>>b>>c;
if(a%2==0)
{
if(((a/2)*c)>a*b)
cout<<a*b<<endl;
else
cout<<((a/2)*c)<<endl;
}
else
{
if(a*b>(((a-1)/2)*c)+b)
cout<<((((a-1)/2)*c)+b)<<endl;
else
cout<<(a*b)<<endl;
}
}
}