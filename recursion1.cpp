#include <iostream>
using namespace std;

int findMax(int s[], int n, int i, int result) {
    if (i == n)
        return result;

    if (s[i] > result)
        result = s[i];
    return findMax(s, n, i + 1, result);
}

int main() {
    int n;
    cin >> n;

    int s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int i = 0;
    int result = s[0];
    int max = findMax(s, n, i + 1, result);
    cout << max << endl;

    return 0;
}
