#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;
string s, s1;
const int N = 1e6+4;
vector<int>lps(N);

void rec() {
    int i = 0, index = 0;
    lps[0] = 0;
    for(int i = 1; i < s1.size();) {
        if(s1[i] == s1[index]) {
            lps[i] = index + 1;
            index++, i++;
        }
        else {
            if(index != 0) index = lps[index-1];
            else {
                lps[i] = index, i++;
            }
        }
    }
}

int kmp() {
    int i = 0, j = 0, count = 0;
    while(i < s.size()) {
        if(s[i] == s1[j]) {
            i++, j++;
        }
        else {
            if(j != 0) {
                j = lps[j-1];
            }
            else i++;
        }
        if(j == s1.size()) {
            count++;
            j = lps[j-1];
        }
    }
    return count;
}

int main() {
    cin >> s >> s1;
    rec();
    int ans = kmp();
    cout << ans << endl;

}