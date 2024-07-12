#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int a,b,c,d,count=0;
cin>>a>>b>>c>>d;
int temp=min(a,b);
int temp1=max(a,b);
for(int i=temp;i<=temp1;i++)
{
if(i==c||i==d)
count++;
}
if(count==2||count==0)
cout<<"NO"<<'\n';
else
cout<<"YES"<<'\n';
}

}