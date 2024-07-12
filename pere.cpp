#include <bits/stdc++.h>
#include<stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count = 0; 
        stack<char> s1; 
        stack<char> s2; 

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                s1.push(s[i]);
            } else if (s[i] == ')') {
                if (s1.empty()) {
                    count++;
                } else {
                    s1.pop();
                }
            } else if (s[i] == '[') {
                s2.push(s[i]);
            } else if (s[i] == ']') {
                if (s2.empty()) {
                    count++;
                } else {
                    s2.pop();
                }
            }
        }

        
        count += s1.size() + s2.size();

        cout << (s.size()-count)/2 << '\n'; 
    }

    return 0;
}
