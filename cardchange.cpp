#include<bits/stdc++.h>
#include<map>
#include<set>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
map<int,int>m;
vector<int>v;
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
    v.push_back(l);
    //cout<<l.second;
    //if(l.second>=a)
    // {
    // temp=1;
    // break;
    // }
    
}
sort(v.begin(),v.end());
int g=v.size();
int h=v[g];
if(n==1)
cout<<n<<end;
else if(h>=a)
cout<<a-1<<endl;
else
cout<<n<<endl;
else{}
// if(n==1)
// cout<<n<<endl;
// else if(temp==1)
// cout<<a-1<<endl;
// else
// cout<<n<<endl;
}
return 0;
}