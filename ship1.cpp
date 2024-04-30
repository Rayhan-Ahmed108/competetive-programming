#include<iostream>
#include <bits/

using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b,ans=0,sum=0,result=0,j,count=0,g=0;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++)
{
    cin>>s[i];
    g=g+s[i];
}
for(int i=0,j=a-1;i<=j;i++,j--)
{
    if(ans<=sum)
    {
    ans++;
    j=j+1;
    result=result+s[i];
    count++;
    if(result>b)
    break;

    }
else
{
sum++;
result=result+s[j];
i=i-1;
count++;
if(result>b)
break;

}

}
if(g<=b)
cout<<a<<endl;
else if(result==b)
cout<<count<<endl;
else if(result>b)
cout<<count-1<<endl;
else
cout<<count<<endl;

}


}