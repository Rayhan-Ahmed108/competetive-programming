#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;
int main()
{
map<string,int>m;
vector<string> v;
int n,i;
cin>>n;
for(int i=0;i<n;i++)
{
string s;
cin>>s;
v.push_back(s);
m[s]++;
}
int j=v.size();
for(i=j-1;i>=0;i--)
{
    for(auto p:m)
    {
        if(v.[i]==p.first)
        {
            cout<<v.[i];
            m.erase(p.first);
            break;

        }
    }
}
}