#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,count=0;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++){
    cin>>s[i];
    if(s[i]%2!=0){
        count++;
    }
}
if(count==0){
    cout<<"no"<<'\n';
}
else if(count==a&&count%2==0){
    cout<<"no"<<'\n';
}
else if(count==a&&count%2==0&&b%2==0){
    cout<<"no"<<'\n';
}


}



}