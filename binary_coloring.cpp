#include <iostream>
using namespace std;

double average(int a[], int n, int i, double sum, double div) {
    if (i == n)
        return sum * div; 
    else {
        sum += a[i];
        return average(a, n, i + 1, sum, div); 
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
   long long  int i = 0;
   double div = 1.0 / n, sum = 0;
   double ans = average(a, n, i, sum, div);

    printf("%.6lf", ans);
    return 0;
}