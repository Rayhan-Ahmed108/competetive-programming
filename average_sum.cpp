#include <iostream>
using namespace std;

double average(int a[], int n, int i, int sum) {
    if (i == n)
        return sum / static_cast<double>(n); 
    else {
        sum += a[i];
        return average(a, n, i + 1, sum); 
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
   long long  double i = 0, sum = 0;
    double ans = average(a, n, i, sum);
    printf("%.6lf\n", ans);

    return 0;
}