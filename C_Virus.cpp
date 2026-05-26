#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string month;
    if (!(cin >> month)) return 0;
    int k; cin >> k;
    
    vector<string> months = {
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };
    
    int idx = -1;
    for (int i = 0; i < 12; ++i) {
        if (months[i] == month) { idx = i; break; }
    }
    if (idx == -1) return 0; // safety, though input guarantees valid month
    
    int new_idx = (idx + (k % 12) + 12) % 12;
    cout << months[new_idx] << "\n";
    return 0;
}
