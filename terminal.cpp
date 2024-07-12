#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
if(a==b&&b==c&&a==0){
    cout<<0<<'\n';
}
else if(a==b&&b==c&&a!=0){
    cout<<-1<<'\n';
}
else{
    int temp=a+(b-a/2);
    cout<<temp<<'\n';
}

}
}
