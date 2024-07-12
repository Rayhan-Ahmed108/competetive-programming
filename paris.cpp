#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first)
        return true;
    else if (a.first == b.first) {
        if (a.second > b.second)
            return true;
        else
            return false;
    } else
        return false;
}

void sol() {
    string s;
    cin >> s;
    vector<pair<int, int>> v;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        v.push_back(make_pair(cnt, i));
        if (s[i] == '(')
            cnt++;
        else
            cnt--;
    }

    sort(v.begin(), v.end(), cmp);

    for (auto a : v)
        cout << s[a.second];
    cout << endl;
}

int main() {
    sol();
    return 0;
}
