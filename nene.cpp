#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int a,b;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++)
cin>>s[i];
int d[b];
for(int i=0;i<b;i++)
cin>>d[i];
int temp=s[0];
for(int i=0;i<b;i++)
{
    if(temp<d[i])
    {
        cout<<temp-1<<" ";
    }
    else if(temp>d[i])
    cout<<d[i]<<" ";
    else
    cout<<d[i]-1<<" ";
}
cout<<'\n';

}

}








