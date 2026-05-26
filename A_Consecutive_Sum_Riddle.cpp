#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> s1(int n) {
        vector<string> ans;
        vector<bool> used(n + 1, false);

        function<void(string)> rec = [&](string cur) {
            if (cur.size() == n) {
                ans.push_back(cur);
                return;
            }
            for (int i = 1; i <= n; i++) {
                if (!used[i]) {
                    used[i] = true;
                    rec(cur + to_string(i));
                    used[i] = false;
                }
            }
        };

        rec("");
        return ans;
    }
};
int main() {
    int n;
    cin >> n;
    Solution sol;
    vector<string> permutations = sol.s1(n);

    for (auto &s : permutations) {
        cout << s << "\n";
    }

    return 0;
}
