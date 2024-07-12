#include<bits/stdc++.h>
using namespace std ;
int main(){
int n,sum=0;
cin>>n;
int a[7];
for(int i=0;i<7;i++){
    cin>>a[i];
}
for(int i=0;;i++){

    for(int j=0;j<7;j++){

        sum=sum+a[j];

        if(sum>=n){

            cout<<j+1;

            return 0;
        }
    }
}


}