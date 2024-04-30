#include<bits/stdc++.h>
#include<queue>
using namespace std;
int mincost(vector<int>& v) {
    priority_queue<int, vector<int>,greater<int> >pq(v.begin(),v.end()); // Min-heap
    long long int count=0;
    while(pq.size()>1)
{
    int a=pq.top();
    pq.pop();
    int b=pq.top();
    pq.pop();
    int ans=a+b;
    count+=ans;
    pq.push(ans);
}
return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    vector<int>v;
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    cout<<mincost(v)<<"\n";
    }
}

