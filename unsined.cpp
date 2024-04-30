#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    set<string> s;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        s.insert(s);
    }
    for (auto p : s)
    {
        cout << p << endl;
    }
}