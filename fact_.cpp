#include<iostream>
using namespace std;
void recur(int a[],int n,int i){
if(i==n)return;

else
{
    cout<<a[i]<<' ';
    
    recur(a,n,i+1);

    
}

}

int main(){

int n;

cin>>n;

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}
int i=0;

recur(a,n,i);


}