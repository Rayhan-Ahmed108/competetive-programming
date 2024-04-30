#include<iostream>
using namespace  std;
int main(){
vector<string>v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    string h;
    cin>>h;
    v.push_back(h);
    
}
for(int i=0;i<v.size();i++)
{
    cout<<v.size()<<" ";
    cout<<v[i];
    cout<<"\n";
}
cout<<endl;



}