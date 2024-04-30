#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b,c,count=0;
cin>>a>>b>>c;
int s[a*a];
for(int i=0;i<a*a;i++)
cin>>s[i];

sort(s,s+(a*a));
int d=s[0];
int g=s[a*a-1];
while(b<g)
{
    
for(int i=0;i<a*a;i++)
{
    if(b==s[i])
    {
        b=b+b;
        count++;
    }
    

}

}
while(c<g)
{
    
for(int i=0;i<a*a;i++)
{
    if(c==s[i])
    {
        c=c+c;
        count++;
    }
    

}

}
if(count==a*a)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}