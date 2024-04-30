#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int a,b,count =0,sum=0;
    cin>>a>>b;
    int s[a];
    for(int i=0;i<a;i++)
    {
        cin>>s[i];
        sum=sum+s[i];
        if(s[i]%2!=0)
        count++;
    }
    if(count==0||sum%2!=0)
    cout<<"No"<<endl;
    else if(count%2==0&&b%2==0)
    cout<<"No"<<endl;
    else if(sum%2==0&&count%2==0)
    cout<<"No"<<endl;
    else 
    cout<<"Yes"<<endl;
}
}