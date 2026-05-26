#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push('(');
        } else {
            if (st.empty()) {
                cout << "no\n";
                return 0;
            }
            st.pop();
        }
    }
    if (st.empty()) cout << "yes\n";
    else cout << "no\n";

    return 0;
}
