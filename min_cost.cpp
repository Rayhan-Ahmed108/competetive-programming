#include <iostream>
#include <string>

using namespace std;

int minCostToMakeGoodString(const string& s) {
    int n = s.length();
    
    // If the string is already good (empty or all elements reversed)
    if (s.empty() || s == string(n, s[0])) 
        return 0;
    
    // If the string needs to be reversed or made empty
    if ((s[0] == '0' && s.back() == '1') || (s[0] == '1' && s.back() == '0')) {
        int cost = 0;
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] != s[n - 1 - i])
                cost++;
        }
        return cost;
    } else {
        // If the string doesn't follow the above pattern, cut all elements
        return n;
    }
}

int main() {
    string s;
    cin >> s;
    
    cout << minCostToMakeGoodString(s) << endl;

    return 0;
}
