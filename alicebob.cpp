#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
 set<int>s;
 vector<int>v;   
int a;
cin>>a;
for(int i=0;i<a;i++)
{
int x;
cin>>x;
v.push_back(x);
s.insert(x);
}
int temp=s.size();//size in set
sort(v.begin(),v.end());
int g=v[a-1];//max in vector
if(temp==1)
cout<<"Alice"<<endl;




}


}