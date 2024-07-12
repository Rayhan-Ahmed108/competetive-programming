#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, sum = 0, ans = 0, temp = 0;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i]; // simplified addition
            if (v[i] == -1) {
                temp = 1;
            }
        }

        
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == -1 && v[i + 1] == -1) {
                ans = 1;
                break;
            }
        }

        if (ans != 1 && temp == 1) {
            cout << sum << '\n'; 
        } else if (ans == 1) {
            sum += 4; 
            cout << sum << '\n';
        } else if (ans != 1 && sum != 1) {
            cout << sum - 4 << '\n'; 
        } else {
            cout << sum << '\n'; 
        }
    }

    return 0;
}
