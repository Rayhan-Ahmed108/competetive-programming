#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    for(auto it:m){
        cout<<it.first<<' '<<it.second<<endl;;
        
    }
}