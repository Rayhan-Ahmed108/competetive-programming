#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n--)
{
int a,b,c,k;
cin>>a>>b>>c;

int s[a*a];
int d[a*a];
for(int i=0;i<a*a;i++)
{
    cin>>s[i];
    d[i]=0;
}
sort(s,s+a*a);
for(int i=0;i<a;i++)
{
    d[i]=s[0]+c*i;
    
}
k=a-1;
for(int i=0;i<a-1;i++)
{
    
    for(int j=1;j<=a-1;j++)
    {
        d[k]=d[i]+c*j;
        k=k+1;

    }
}
sort(d,d+a*a);
for(int i=0;i<a*a;i++)
{
    cout<<d[i]<<" ";
}
}
}