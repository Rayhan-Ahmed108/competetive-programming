#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int temp=0,p=0;
for(int i=0;i<n-1;i++){
if(a[i]>a[i+1]){
temp=i+1;
break;
}
}
if(temp==0)
cout<<"Yes"<<'\n';
else{
for(int i=temp;i<n;i++){
if(a[0]<a[i])
{
     p=1;
}
}
if(p==1){
    cout<<"No"<<'\n';
}
else
cout<<"Yes"<<'\n';

}
}

}