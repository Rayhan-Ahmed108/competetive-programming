#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,count=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    count++;
}
cout<<count<<endl;
}
}