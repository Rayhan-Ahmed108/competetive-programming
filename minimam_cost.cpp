#include<bits/stdc++.h>
using namespace std;
const int  N = 1e5+10;
int h[N];
int n;
int cost=INT_MAX;
int func(int i,int sum){ 

    

    if(i>n) return ;
    if(i==n-1){
        cost=min(cost , sum); 

        return ;
    }
    func(i+1,sum + abs(h[i]-h[i+1]));

    func(i+2,sum + abs(h[i] - h[i+2]));

}
int main(){

int n;

cin>>n;

for(int i=0;i<n;i++){

    cin>>h[i];
}
func(0,0);

}