#include <iostream>
#include <cmath>
using namespace std;

void findCubes(long long int s) {
    bool found = false;
    for(long long int a = 1; a*a*a < s; ++a) {
       long long  int b = cbrt(s - a*a*a); 
        if (a*a*a + b*b*b == s) {
            cout << "YES" << '\n';
            found = true; 
            return;
        }
    }
    if (!found) {
        cout << "NO" << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
       long long int s;
        cin >> s;
        findCubes(s);
    }
    return 0;
}
