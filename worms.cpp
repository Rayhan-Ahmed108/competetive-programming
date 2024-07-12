#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
long long int sum=0,count=0;;
cin>>a>>b;
int s[a];
for(int i=0;i<a;i++){
    cin>>s[i];
}
sort(s,s+a);
for(int i=0,j=a-1;;i++){
    if(s[i] + s[i+1]<s[j]){
        s[i]=0;
        s[i+1]=0;
        i=i+1;
        count++;
        if(count==b){
            break;
        }
    }
    else{
        s[j]=0;
        j=j-1;
        count++;
        if(count==b){
            break;
        }
    }
}
for(int i=0;i<a;i++){
    sum=sum+s[i];
}
cout<<sum<<'\n';
}
}