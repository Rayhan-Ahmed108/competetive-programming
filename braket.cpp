#include <iostream>
#include <stack>
#include <string>
using namespace std;

int countIncorrectBrackets(const string& s) {
    stack<char> st;
    int count = 0;

    for (char bracket : s) {
        if (bracket == '(') {
            st.push(bracket); 
        } else if (bracket == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop(); 
            } else {
                count++; 
            }
        }
    }
    count += st.size(); 

    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin >> s;

        int incorrect = countIncorrectBrackets(s);
        cout << incorrect / 2 << '\n';
    }

    return 0;
}
