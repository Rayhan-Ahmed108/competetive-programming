#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s[0];
    int temp=s[0]-'0';
    for (int i = 1; i < s.size(); i++) {
        int char1 = s[i] - '0'; 
        cout << (char1 ^ temp); 
        temp = (temp ^ char1);
    }

    return 0;
}
