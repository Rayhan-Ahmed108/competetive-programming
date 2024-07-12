#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    string x;
    vector<pair<string, int>> p;
    for (int i = 0; i < n; i++) {
        cin >> x >> num;
        p.push_back({x, num});
    }
    sort(p.begin(), p.end(), [&](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });

    for (auto& x : p) {
        cout << x.first << ' ' << x.second << endl;
    }

    return 0;
}
