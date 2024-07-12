#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int zero=0,one=0;
string s;
cin>>s;
for(char c:s){
    if(c=='0'){
        zero++;
    }
}
one=s.size()-zero;
if(one==zero){
    cout<<0<<'\n';

}
else if(one=s.size()||zero==s.size()){
    cout<<one<<'\n';
}
else{
    int sum=max(one,zero);
    if(sum>(min(one,zero)))
    {
        cout<<sum+max(one,zero)-min(one,zero)<<'\n';
    }
    else
    cout<<max(one,zero)-min(one,zero)<<'\n';
    
}



}






}