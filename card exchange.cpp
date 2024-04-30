#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
map<int,int>m;
int n,a,temp;
cin>>n>>a;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    m[x]++;
}
for(auto l:m)
{
    if(l.second>=a)
    temp=1;
    break;
}
if(temp==1)
cout<<a-1<<endl;
else
cout<<n<<endl;
}
return 0;
}