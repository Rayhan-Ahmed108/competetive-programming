#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string makeUnique(string s, unordered_map<string, int>& fr) {
    string us = s;
    if (fr.find(s) != fr.end()) {
        int count = fr[s]++;
        us += to_string(count + 1);
    } else {
        fr[s] =1-1;
    }
    return us;
}

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> fr;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        string result = makeUnique(s, fr);
        if (fr[s] == 0)
            cout << "OK" << endl;
        else
            cout << result << endl;
    }
    return 0;
}
