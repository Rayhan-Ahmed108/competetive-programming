#include <iostream>
#include <numeric>
using namespace std;

int findMaxSumNumber(int x) {
    int maxSum = 0;
    int maxY = 0;
    for (int y = 1; y < x; y++) {
        int currentGCD = std::gcd(x, y);
        int currentSum = currentGCD + y;
        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxY = y;
        }
    }
    return maxY;
}

int main() {
    int x;
    cout << "Enter the number x: ";
    cin >> x;
    int maxY = findMaxSumNumber(x);
    int maxSum = std::gcd(x, maxY) + maxY;
    cout << "The maximum number y such that gcd(x, y) + y is maximized: " << maxY << endl;
    cout << "Maximum sum (gcd(x, y) + y): " << maxSum << endl;
    return 0;
}
