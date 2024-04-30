#include<iostream>
using namespace std;
int d[100000000]={0};
int main(){
int t;
cin>>t;
while(t--)
{
int a,n;
cin>>a>>n;
string s;

cin>>s;
for(int i=0;i<a;i++)
{
    int count=0;
    for(int j=i;j<a;j++)
    {
        if(s[i]==s[j]&&s[j]>=97&&s[j]<=122)
        count++;
        s[j]='0';
    }
    d[i]=count;
    
}
for(int i=0;i<n;i++)
{
    cout<<d[i]<<" ";
}



}




}