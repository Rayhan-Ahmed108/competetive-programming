#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a;
cin>>a;
if(a%2!=0)
cout<<2<<" "<<a-1;
else
cout<<2<<" "<<a/2;
cout<<'\n';
}
}