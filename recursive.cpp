#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int solve()
{
    int a,b,temp=0;
    cin>>a>>b;
    int s[a];
    for(int i=0;i<a;i++)
    {
    cin>>s[i];
    }
    for (int i = 0; i < (1 << a); ++i) {
        bitset<32> mask(i);
        int sum = 0;
        for (int j = 0; j < a; ++j) {
            if (mask[j]) {
                sum += s[j];
            }
        }
        if (sum == b) {
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
