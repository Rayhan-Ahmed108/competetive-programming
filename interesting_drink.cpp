#include<bits/stdc++.h>
using namespace std;
#define nl '\n';
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cin.exceptions(ios::badbit | ios::failbit);
int main(){
FIO
int a;
cin>>a;
vector<int>n(a);
for(int i=0;i<a;i++){
    cin>>n[i];
}
sort(n.begin(),n.end());
int b;
cin>>b;
vector<int>m(b);
for(int i=0;i<b;i++){
    cin>>m[i];
}
for(int i=0;i<b;i++){
int ans = upper_bound(n.begin(), n.end(), m[i]) - n.begin(); // Binary search
        cout << ans << nl;

}

}