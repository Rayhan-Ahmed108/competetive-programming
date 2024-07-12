#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long temp = (long long)n * (n - 1) * (n - 2) * (n - 3) / 24;
    cout << temp;
    return 0;
}
