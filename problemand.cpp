#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,p=0;
    cin>>n;
    while(n>=1)
    {
        if(n%2!=0)
        {
            p++;
            n=n-1;
 
        }
        else
        {
            n=n/2;
        }
    }
    if(p%2==0)
    cout<<"EVEN"<<endl;
    else
    cout<<"ODD"<<endl;
    }
    }