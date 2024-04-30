#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
unordered_map<string,int>m;
int n;
cin>>n;
string f[200000];
for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    m[s]++;
}
int i=0,ans=0,j;
for(auto p:m){
cout<<p.first<<endl;
}
}