#include<bits/stdc++.h>
using namespace std;
int main()
{
int s[4],sum=0,count=0;
for(int i=0;i<4;i++)
{
    cin>>s[i];
}
sort(s+1,s+4);
for(int i=1;i<4;i++)
{
    sum=sum+s[i];
    if(sum>s[0])
    break;
    else
    count++;
}
cout<<count<<'\n';
}