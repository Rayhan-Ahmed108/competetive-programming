#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,temp=0;
cin>>n;
int a[n-1];
for(int i=0;i<n-1;i++)
{
    cin>>a[i];
}
temp=1000;
cout<<temp<<' ';
for(int i=0;i<n-1;i++)
{
    temp=temp+a[i];
    cout<<temp<<' ';
}
cout<<"\n";
}

}