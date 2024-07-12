#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
unordered_map<char,int>m;
string s;
cin>>s;
for(int i=0;i<s.size();i++){

    m[s[i]]++;
}
for(auto it:m){
    cout<<it.first<<' '<<it.second<<'\n';
}




}





}