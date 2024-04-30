#include<iostream>

using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int a,b,j,count=0;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++)
{
    cin>>s[i];
}
for(int i=0,j=a-1;i<=j;i++,j--)
{
if(s[i]<s[j])
{
s[i]=0;
s[j]=s[j]-s[i];
j=j+1;
b=b-s[i]*2;
if(b>=0)
{
  count++;
}
else
break;
}
else
{
  s[j]=0;
s[i]=s[i]-s[j];
i=i-1;
b=b-s[j]*2;
if(b>=0)
{
  count++;
}
else
break;  
}

}
cout<<count<<endl;
}




}