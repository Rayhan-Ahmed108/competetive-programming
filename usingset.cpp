#include <bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    set<string> s;
    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        v.push_back(a);
        s.insert(a);
    }
    int g = v.size();
    for (int i = g - 1; i >= 0; i--)
    {
        if(s.count(v[i]))
        {
            cout<<v[i]<<"\n";
            s.erase(v[i]);
        }
    }
    cout << endl;
}