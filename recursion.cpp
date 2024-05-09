#include<iostream>
const int k=1e9+7;
using namespace std;
long long int fact(int n)
{
if(n<=1)
return 1;
long long int result=((n%k)*fact(n-1)%k)%k;
return result;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;

}