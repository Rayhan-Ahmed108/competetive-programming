#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

int n,count=0;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++)
{
    if(s[i]=='U')
    count++;
}
if(count%2!=0)
cout<<"YES"<<'\n';
else
cout<<"NO"<<'\n';
}
}