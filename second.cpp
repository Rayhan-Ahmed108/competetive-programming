#include<iostream>
using namespace std;
int main()
{
int n,ans=0;
cin>>n;
int s[n];
for(int i=0;i<n;i++)
{
cin>>s[i];
}
sort(s,s+n);
for(int i=0;i<n-1;i++)
{
    if(s[i]!=s[i+1])
    {
        ans++;
        cout<<s[i+1]<<endl;
        return 0;
    }
    
}
if(ans==0)
{
    cout<<"NO"<<endl;
}

return 0;

}