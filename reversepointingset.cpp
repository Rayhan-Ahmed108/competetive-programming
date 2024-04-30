#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
set<int>s;
vector<int>v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    s.insert(x);
}
set<int>::iterator it;
for(it=rbegin();it!=rend();it--)
{
cout<<(*it)<<" ";
}
cout<<endl;

}
