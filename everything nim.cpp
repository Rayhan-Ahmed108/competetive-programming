#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int temp=a[n-1],j=0;
while(temp<=0)
{
count++;
temp=temp-a[j];
j=j+1;
}
if(count%2==0)
cout<<"Alice"<<endl;
else
cout<<"Bob"<<endl;
    }
}




}