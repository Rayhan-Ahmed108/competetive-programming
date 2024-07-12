#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        unordered_map<char, int> freq;

        for (char c : s)
        {
            freq[c]++;
        }

        int position = -1;
        for (int i = 0; i < s.size(); ++i)
        {
            if (freq[s[i]] == 1)
            {
                position = i;
                break;
            }
            else
                freq[s[i]]--;
        }

       for(int i=position;i<s.size();i++){
        cout<<s[i];
       }
       cout<<'\n';

        
    }
}