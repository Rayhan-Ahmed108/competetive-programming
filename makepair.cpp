#include<iostream>
#include<math.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int n,temp=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n-1;i++)
{
    if((a[i]*a[i+1])==(i+1)*(i+2))
    {
        temp=1;
        break;
    }
}
if(temp==1)
{
    cout<<"2"<<endl;
}
else
cout<<"3"<<endl;

}
}