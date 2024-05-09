#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       long long int a, b;
        cin >> a >> b;
       long long int temp = pow(2, b); 
        long long int ans = min(temp, a + 1);
        if(a+1>temp)
        cout<<temp<<'\n';
        cout << ans << '\n';
    }
    return 0;
}
