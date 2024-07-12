#include<bits/stdc++.h>
#include<set>
#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int temp;
    set<char>w;
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
    w.insert(s[i]);
}
if(w.size()==1)
cout<<"NO"<<'\n';
else
{
    cout<<"YES"<<'\n';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            cout<<s[i];
        }
        else
        {
            cout<<s[i+1]<<s[i];
            temp=i+2;
            break;
            
        }
    
    }
    for(int i=temp;i<s.size();i++)
    {
        cout<<s[i];
    }
    cout<<'\n';
    
}

}

}