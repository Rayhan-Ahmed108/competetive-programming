#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(b<a*2){
        cout<<-1<<' '<<-1<<'\n';
    }
    else{
        cout<<a<<' '<<a*2<<'\n';
    }
}

}