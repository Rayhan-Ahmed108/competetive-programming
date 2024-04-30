#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int n,temp,count=0,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    temp=a[n-1];
    for(j=0;;j++)
    {
    count++;
    temp=temp-a[j];
    if(temp<=0)
    break;
    }
    if(count%2==0)
    cout<<"Bob"<<'\n';
    else
    cout<<"Alice"<<'\n';
    }
    return 0;
    }