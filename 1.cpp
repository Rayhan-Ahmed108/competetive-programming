#include <iostream>
#include <algorithm>
#include <vector>
#include <utility> 
#include <string>

using namespace std; 

bool cmp(pair<string, int>& a, pair<string, int>& b) 
{
    if (a.second != b.second) 
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main() 
{
    int n;
    cin >> n;
    string x;
    vector<pair<string, int>> p;
    for (int i = 0; i < n; i++) {
        cin >> x;
        p.push_back({x, i});
    }
    sort(p.begin(), p.end(), cmp);
    for (auto& x : p) {
        cout << x.first << ' ' << x.second << endl;
    }

    return 0;
}
