#include<iostream>
using namespace std;
void printvec(vector<int>&v)
{
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<" ";

}
cout<<"\n";


}
int main()
{
    int n;
    cin>>n;
vector<int>v[n];
for(int i=0;i<n;i++)
{
int m;
cin>>m;
for(int j=0;j<m;j++)
{
    int x;
    cin>>x;
    v[i].push_back(x);
}

}
for(int i=0;i<n;i++)
{
    printvec(v[i]);
}





}