#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
int x,a,b;
cin>>a>>b;
int g=min(a,b);
int d=(a^g)+(b^g);
cout<<d<<endl;
}
}