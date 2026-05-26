#include<bits/stdc++.h>
using namespace std;
int rec(int n, int m, int ans) {
    if(n == 0 or m == 0) return ans;
    else return rec(n - 1, m - 1, ans + n + m);
    
}
int main() {
    int n;
    cin >> n;
    cout << rec(n, 10, 0);
}