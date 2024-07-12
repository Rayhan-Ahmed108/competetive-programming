#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

int one(const string& s) {
    unordered_map<char, int> countMap;
    int left = 0;
    int minL = INT_MAX;
    int uC = 0;

    for (int right = 0; right < s.size(); ++right) {
        char rightChar = s[right];
        countMap[rightChar]++;
        
        
        if (countMap[rightChar] == 1) {
            uC++;
        }
        
        
        while (uC == 3) {
            minL = min(minL, right - left + 1);
            char lc = s[left];
            countMap[lc]--;
            if (countMap[lc] == 0) {
                uC--;
            }
            left++;
        }
    }

    return (minL == INT_MAX) ? -1 : minL;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int result = one(s);
    if (result != -1) {
        cout << result << endl;
    } else {
        cout << 0 << endl;
    }
    
}
}
