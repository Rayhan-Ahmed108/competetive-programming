#include<bits/stdc++.h>
#include<map>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int c = 0;
    map<int,int>a;
    map<int,int>b;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        a[x] = i+1;
        b[i+1] = x;
    }
    for(auto i : a){
        if(i.first == b[i.second] && i.second == b[i.first]){
            c = 1;
            cout<<2<<'\n';
            return;
        }
    }
    cout<<3<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        solve();
    }
}