#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b;
cin>>a>>b;
int s[a],d[b],count=0;
for(int i=0;i<a;i++)
{
    cin>>s[i];
}
for(int i=0;i<b;i++)
{
    cin>>d[i];
}
for(int i=0;i<a;i++)
{
    for(int j=0;j<b;j++)
    {
        if(s[i]==d[j])
        {
            count++;

        }
    }
}
cout<<count;
cout<<"\n";
}

return 0;


}
