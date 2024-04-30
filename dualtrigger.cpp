#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int n,count=0,ans=0;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++)
{
    if(s[i]=='1')
    ans++;
if(s[i]=='1'&&s[i+1]=='1'&&i+1<n)
count++;
 



}
if(count==1&&ans==2)
cout<<"NO"<<endl;
else if(ans%2==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;



}



}