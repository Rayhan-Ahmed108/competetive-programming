#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n;

        cin>>n;

        long long int count=0,sum=0;

        for(int i=1;;i++){


            sum=sum+i;
            if(sum<=n){

                count++;
            }
            else break;


        }    
        cout<<count<<'\n';



    }
 

}



 



