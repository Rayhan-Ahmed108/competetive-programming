#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
int s[a];
for(int i=0;i<a;i++)
cin>>s[i];
int b;
cin>>b;
int y[b];
for(int i=0;i<b;i++)
cin>>y[i];
for(int i=0;i<b;i++)
{
int count=0;
for(int j=0;j<a;j++)
{
    if(y[i]==s[j])
    count++;
}
cout<<count<<endl;
}
}