#include<bits/stdc++.h>
#include<set>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    set<char> m;
    vector<char> v;
    int n;
    cin>>n;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        m.insert(s[i]);
    }

   
    for(auto it = m.begin(); it != m.end(); it++) {
        v.push_back(*it);
    }

    
    for(int i=0;i<s.size();i++){
        for(int j=0;j<v.size();j++){
            if(s[i]==v[j]){
                cout<<v[v.size()-j-1];
            }
        }
    }
cout<<'\n';
   
}
}