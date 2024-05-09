#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
int t,temp1,temp;
cin>>t;
for(int i=0;;i++)
{
    temp=pow(2,i);
    if(temp>t)
    {
     temp1=pow(2,i-1);
     break;
    }
}
cout<<t-temp1<<' '<<temp1<<'\n';

}
}