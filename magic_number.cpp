#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
if(a==0&&b==0){
    cout<<0<<'\n';
}
else if(b==0&&a!=0&&a%15==0){
    cout<<a/15<<'\n';
}
else if(b==0&&a!=0&&a%15!=0){
    cout<<a/15+1<<'\n';
}
else if(a==0&b!=0){
    cout<<b/2+b%2<<'\n';
}
else{
    if(b%2==0){
    if((b/2)*7>=a){
        cout<<b/2<<'\n';
    }
    else{
    if(((a-((b/2)*7))%15)==0)
    {
        cout<<b/2+((a-((b/2)*7))/15)<<'\n';
    }
    else
    cout<<b/2+((a-((b/2)*7))/15)+1<<'\n';
    }
    }
    else{
        if(((b/2)*7)+11>=a){
            cout<<(b/2)+1<<'\n';
        }
        else{
            if(((a-(((b/2)*7)+11))%15)==0){
                cout<<b/2+((a-(((b/2)*7)+11))/15)+1<<'\n';
            }
            else
            cout<<b/2+((a-(((b/2)*7)+11))/15)+2<<'\n';
        }

    }

}

}

}