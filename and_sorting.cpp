#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int n,temp=0,i;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
    if(a[i]!=i)
    {
        temp=i;
        break;
    }
    
}
cout<<temp<<'\n';

}

}