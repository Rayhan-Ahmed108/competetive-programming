#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Generate powers of 2
    vector<long long int> v1;
    long long int power_of_2 = 4;
    while (power_of_2 <= v[n - 1]) {
        v1.push_back(power_of_2);
        power_of_2 *= 2;
    }

    for (int i = 0; i < n; i++) {
        bool is_power_of_2 = false;
        for (int j = 0; j < v1.size(); j++) {
            if (v[i] == v1[j]) {
                is_power_of_2 = true;
                break;
            }
        }
        bool is_perfect_square = false;
        for (long long int k = 2; k * k <= v[i]; k++) {
            if (k * k == v[i]) {
                is_perfect_square = true;
                break;
            }
        }
        if (is_power_of_2 || is_perfect_square) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
