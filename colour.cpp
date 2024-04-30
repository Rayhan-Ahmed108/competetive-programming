include<iostream>
using namespace std;
int main()
{
in#t t;
cin>>t;
while(t--)
{
int a,b,c,temp;
cin>>a>>b>>c;
if(a%b==0)
{
    temp=a/b;
    if(a-temp<=c)
    cout<<"NO"<<endl;
    else 
    cout<<"YES"<<endl;
}

else 
{
    temp=(a/b)+1;
    if(a-temp<=c)
    cout<<"NO"<<endl;
    else 
    cout<<"YES"<<endl;

}


}

}
