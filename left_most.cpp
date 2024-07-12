#include<iostream>
using namespace std;

void result(int s[], int t, int i) {
    if (i == t)
        return; 
    else {
        if (s[i] >= s[i - 1]) {
            cout << s[i] << " ";
            result(s, t, i + 1); 
        } else {
            s[i] = s[i - 1]; 
            cout << s[i] << " ";
            result(s, t, i + 1); 
        }
    }
}

int main() {
    int t;
    cin >> t;
    int s[t];
    for (int i = 0; i < t; i++) {
        cin >> s[i];
    }
    cout << s[0] << " ";
    int i = 1;
    result(s, t, i); 
    return 0;
}
