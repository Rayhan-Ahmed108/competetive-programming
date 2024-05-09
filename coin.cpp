#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string coins;
        cin >> coins;
        
        int n = coins.size();
        int up_count = 0;
        
        
        for (char c : coins) {
            if (c == 'U') {
                up_count++;
            }
        }
        
        
        if (n % 2 == 0) {
            
            if (up_count % 2 == 0) {
                cout << "Bob" << endl;
            } else {
                cout << "Alice" << endl;
            }
        } else {
            if (up_count % 2 == 0) {
                cout << "Alice" << endl;
            } else {
                cout << "Bob" << endl;
            }
        }
    }
    return 0;
}
