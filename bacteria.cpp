#include<iostream>
using namespace std;
int main()
{
int n,count=0;
cin>>n;
while(n>=1)
{
    if(n/2==0)
    {
        count++;
        n=n/2;
    }
else
{
    n=n-1;
}
}
cout<<count<<'\n';
}