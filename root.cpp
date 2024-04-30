#include<iostream>
using namespace std ;
int d[1000000000]={0};
int main(){
int t;
cin>>t;
while(t--)
{
int a,b,c;
cin>>a>>b>>c;
int s[a*a];
for(int i=0;i<a*a;i++)
cin>>s[i];
sort(s,s+a*a);
int temp=s[0];
cout<<temp;
}
}