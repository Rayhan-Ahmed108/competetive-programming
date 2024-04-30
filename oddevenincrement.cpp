#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
         
int t;
cin>>t;
while(t--)
{
set<int>s;
int n,j,temp,count=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
if((i+1)%2==0)
{
    
count++;
}
s.insert(a[i]);
}
}
return 0;
}