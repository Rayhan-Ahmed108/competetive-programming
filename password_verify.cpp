#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;

cin>>n;

string s;

int count=0;
cin>>s;

for(int i=0;i<s.size()-1;i++){

if(s[i]-48 <= s[i+1]-48){

    continue;
}
else
count=1;

}
if(count==1)
    cout<<"NO"<<'\n';
else
    cout<<"YES"<<'\n';


}



}