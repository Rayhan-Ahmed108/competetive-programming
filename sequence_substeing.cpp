#include <iostream>
#include <string>
using namespace std;

int scs(const string &s1, const string &s2)
{
    int count = 0;
    size_t pos = 0;
    while ((pos = s1.find(s2, pos)) != string::npos)
    {
        ++count;
        pos += s2.size();
    }
    return count;
}

int main()
{
    int t,i;
    cin >> t;
    while (t--)
    {
        
        string s1, s2;

        cin >> s1;

        cin >> s2;

        int occurrences = scs(s1, s2);
        printf("Case %d: %d", i, occurrences);
        i=i+1;
        cout << '\n';
    }
}
