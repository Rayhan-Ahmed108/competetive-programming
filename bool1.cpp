#include <bits/stdc++.h>
#include<set>
using namespace std;
int main()
{

    string s;
    cin >> s;
    set<char> s;
    for (int i = 0; i < s.size(); i++)
    {
        s.insert(s[i]);
    }
    for(auto it:s){
        cout<<it.first<<end;
        break;
    }
}