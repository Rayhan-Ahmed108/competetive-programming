#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
void printUniqueStrings(vector<string>& strings) {
    set<string> s;
    for (auto it = strings.rbegin(); it != strings.rend(); ++it) {
        if (s.find(*it) == s.end()) {
            cout << *it << endl;
          s.insert(*it);
        }
    }
}

int main() {
    vector<string> stringList ;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        stringList.push_back(s);
    }

    printUniqueStrings(stringList);
    return 0;
}