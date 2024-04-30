#include<iostream>
using namespace std;
int main()
{
int n,ans=1;
cin>>n;
for(int i=1;i<=n;i++)
{
int a,b;
cin>>a>>b;
printf("Case ans: %d\n",a+b);
ans++;
}
}