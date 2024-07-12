#include<bits/stdc++.h>
using namespace std;
#define int long long


int suffix(int a[], int m, int i, int sum) {

    if (i == m-1) { 
        return sum;
    } else {
        sum += a[i];
        return suffix(a, m, i-1, sum); 
    }
}

int32_t main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0, i = n - 1, sum = 0;

    sum = suffix(a,n- m, i, sum);

    cout << sum << endl;
    return 0;
}
