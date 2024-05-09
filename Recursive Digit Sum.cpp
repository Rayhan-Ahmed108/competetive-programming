#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int sum=0,d=strlen(s);
for(int i=0;i<d;i++)
{
    sum=sum+s[i]-'49';
}
cout<<sum<<endl;
33
}