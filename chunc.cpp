#include <iostream>
#include <string>
#include <map>
using namespace std;

void divideString(const string &str, const string &target, int &result) {
    size_t targetSize = target.size();
    for (size_t i = 0; i <= str.size() - targetSize; ++i) {
        if (str.substr(i, targetSize) == target) {
            result++;
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; ++k) {
        string a, b;
        cin >> a >> b;
        int count = 0;
        divideString(a, b, count);
        cout << "Case " << k << ": " << count << '\n';
    }
    return 0;
}
