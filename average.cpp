#include <iostream>
using namespace std;

// Function to calculate factorial
long long int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return static_cast<long long int>(n) * factorial(n - 1);
}


long long int nCr(int N, int R) {
    if (R > N) return 0; 
    return factorial(N) / (factorial(R) * factorial(N - R));
}

int main() {
    int N, R;
    cin >> N >> R;

    cout << nCr(N, R) << endl;

    return 0;
}
