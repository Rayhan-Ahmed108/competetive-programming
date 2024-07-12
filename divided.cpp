#include <iostream>
#include<utility>
#include <vector>
using namespace std;

// Function to find GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find a pair of elements that can divide all elements of the array
pair<int, int> findDividingPair(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int currGCD = gcd(arr[i], arr[j]);
            bool canDivide = true;
            for (int k = 0; k < n; k++) {
                if (k != i && k != j && arr[k] % currGCD != 0) {
                    canDivide = false;
                    break;
                }
            }
            if (canDivide) {
                return {arr[i], arr[j]};
            }
        }
    }
    // If no such pair exists, return {-1, -1}
    return {-1, -1};
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int, int> dividingPair = findDividingPair(arr);
    if (dividingPair.first != -1 && dividingPair.second != -1) {
        cout << "Pair found: " << dividingPair.first << " " << dividingPair.second << endl;
    } else {
        cout << "No such pair exists." << endl;
    }

    return 0;
}
