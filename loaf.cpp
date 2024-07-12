#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, count = 0, ans = 0, counter = 0, answer = 0, i, temp = -1;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'L')
            count++;
        else
            ans++;
    }
    
    for (i = 0; i < s.size()-1; i++)
    {
        if (s[i] == 'L')
        {
            counter+=1;
            count-=1;
            
            if (count != counter && ans != answer)
            {
                cout << i + 1;
                return 0;
            }
            
                
        }
        else if (s[i] == 'O')
        {
            answer+=1;
            ans-=1;
            if (count != counter && ans != answer)
            {
                cout << i + 1;
                return 0;
            }
            
                
        }
    }
    
        cout << -1;
    
}