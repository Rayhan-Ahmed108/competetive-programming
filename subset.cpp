#include<bits/stdc++.h>
using namespace std;
#define FAST_IO {ios_base::sync_with_stdio(false); cin.tie(0);}
void ans(){
int a,b;
cin>>a;
cin>>b;
int s[b];
for(int i=0;i<b;i++){
    cin>>s[i];
}
int k=1<<b;

for(int i=0;i<k;i++){ 

int result=0;

for(int j=0;j<b;j++){

int kk=1<<j;

if(i & kk){

    result = result + s[j];
}

}
if(result==a){

    cout<<"YES"<<'\n';

    return ;
}

}
cout<<"NO"<<'\n';

}
int main(){

FAST_IO;

int t;

cin>>t;

while(t--){
    ans();
}
}