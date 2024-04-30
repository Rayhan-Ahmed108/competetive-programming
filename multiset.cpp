#include<bits/stdc++.h>
#include<iostream>
using namespace st;
int main()
{
map<multiset<string>,int>m;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
string s;
int x;
cin>>s>>x;
m[s].insert(x);
}
auto it=--m.end();
while(1)
{
auto &p=(*it).second;
int x=(*it).first;
for(auto l;p)
{
    cout<<l<<' '<<x<<endl;
}
if(it==m.begin())
break;
it--;
}




}