#include<iostream>
using namespace std ;
int main(){
int t;
cin>>t;
while(t--)
{

int a,b,c,k=0,g,temp,q=0;
cin>>a>>b>>c;
int s[a*a];
int d[a*a];
for(int i=0;i<a*a;i++)
{
    d[i]=0;
}
for(int i=0;i<a*a;i++)
cin>>s[i];
sort(s,s+a*a);
g=s[0];
for(int i=0;i<a;i++)
{
temp=g+i*c;
for(int j=0;j<a;j++)
{
d[k]=temp+j*b;
k++;
}
}
sort(d,d+a*a);
for(int i=0;i<a*a;i++)
{
if(s[i]!=d[i])
{
    q=q+1;
    break;
}
}
if(q==1)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}
}