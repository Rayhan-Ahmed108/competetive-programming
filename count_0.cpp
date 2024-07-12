#include <iostream>
using namespace std;

int result(long long int n, int count) {
    if (n == 1)
        return count;
    else {
        if (n % 2 == 0)
            return result(n / 2, count + 1);
        else
            return result(3 * n + 1, count + 1); 
    }
}

int main() {
    long long int n;
    cin >> n;
    int count = 0;
    int ans = result(n, count);
    cout << ans+1 << endl;
    return 0;
}
