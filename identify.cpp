#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    if (a == b)
    {
        cout << -1;
    }
    else
    {
        for(int i=1;i<=3;i++){
            if(i!=a&&i!=b){
                cout<<i;
                return 0;
            }
        }
}
}
