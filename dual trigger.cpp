#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int n,count=0;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++)
{
if(s[i]==1)
count++;


}
if(count%2==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;



}



}