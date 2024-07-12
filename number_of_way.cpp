#include<bits/stdc++.h>
using namespace std;

void recur(int f, int &l, int &cnt){

    if(f > l)return;
    if(f == l){
        cnt++;
        return;
    }

    recur(f + 1, l, cnt);
    recur(f + 2, l, cnt);
    recur(f + 3, l, cnt);
}

int main(){
    int f, l, cnt = 0;
    cin>>f>>l;
    recur(f, l, cnt);
    
    cout<<cnt<<endl;
}