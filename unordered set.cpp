#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
unordered_set<string>s;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    string x;
    cin>>x;
    s.insert(x);
}
for(auto &it:s)
cout<<it<<endl;
}