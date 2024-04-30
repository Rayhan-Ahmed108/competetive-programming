#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b,temp;
cin>>a>>b;
for(int i=0;;i++)
{
int d=pow(2,i);
if(d>b)
{
    temp=pow(2,i-1);
    break;
}

}
if(a==1)
cout<<b<<endl;
else
cout<<temp-1<<' '<<b-temp+1<<' ';
{
    for(int i=0;i<a-2;i++)
    cout<<0<<' ';

}
cout<<endl;
}


}