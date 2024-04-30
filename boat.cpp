#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int a,b,count=0;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++)
cin>>s[i];
for(int i=0,j=a-1;i<=j;i++,j--)
{
if(s[i]<s[j])
{
    b=b-s[i]*2;
s[i]=0;
s[j]=s[j]-s[i];
if(b>=0)
{
    count++;
    j=j+1;
}
else 
break;
}
else
{
    b=b-s[j]*2;
s[j]=0;
s[i]=s[i]-s[j];
if(b>=-1)
{
    count++;
    i=i-1;
}
else 
break;
}
}
cout<<count<<endl;


}



}