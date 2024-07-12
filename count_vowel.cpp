#include<bits/stdc++.h>
using namespace std;

int solve(string &s, int i, int count) {
    if (i == s.size())
        return count;
    else {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            count++;
        return solve(s, i + 1, count); 
    }
}

int main() {
    string s;
    int count = 0;
   getline(cin,s) ;
    cout << solve(s, 0, count);
}
