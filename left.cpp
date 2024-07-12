#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
 
int a,even=0,odd=0,same_diff=0;
cin>>a;
int s[a];
for(int i=0;i<a;i++){
    cin>>s[i];
    if(s[i]%2==0)
    even++;
    else
    odd++;
}
sort(s,s+a);
for(int i=0;i<a;i++){
    if(abs(s[i]-s[i+1]==1))
    {
        same_diff++;
        i=i+1;
    }
}
if(even % 2 == 0 && odd % 2 == 0 && even+odd==a){
    cout<<"YES\n";
}
else if(even % 2 ==0 &&  odd % 2 == 0 && same_diff + even + odd == a )


 }
}