#include<bits/stdc++.h>
using namespace  std;
int main(){
int n;
cin>>n;
while(n--)[

int t;
cin>>t;

int a[t]

for(int i=0;i<t;i++){

cin>>a[i];

}
sort(a,a + t);

int temp=a[0];

for(int i=1;i<t;i++){

if(a[i]%temp!==0){

    int g=i;

for(int j=g+1;j<t;j++){

if(a[j] % a[g]!=0 || a[j] % temp!= 0){

    int h=1;

    break;
}

}

}

}
if(h==1){
    cout<<"No"<<'\n';
}
else
cout<<"Yes"<<'\n';

]


}