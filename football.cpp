#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{

    int n,temp=-1;
    string f;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {

        string s;
        cin >> s;
        m[s]++;
    }
    for (auto it : m)
    {
        if (it.second > temp)
        {
            temp = it.second;
            f = it.first;
        }
    }
    cout << f << endl;
}