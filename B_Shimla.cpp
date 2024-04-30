#include<bits/stdc++.h>
#include<queue>
#include<set>

using namespace std;


void solve()
{
    long long n,sum=0,cnt=0;
    cin>>n;
    multiset<long long> s;
    for(int i=0;i<n;i++ )
    {
        long long x;
        cin>>x;
        s.insert(x);
    }

    for(int i=0;i<n-1;i++)
    {
        cnt+=*s.begin();
        s.erase(s.begin());
        cnt+=*s.begin();
        s.erase(s.begin());
        sum+=cnt;
        s.insert(cnt);
        cnt=0;

    }
    cout<<sum<<"\n"; 
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}