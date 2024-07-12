#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << s;
    }
    else if (count == 0 && s[0] >= 97 && s[0] <= 122)
    {
        printf("%c", s[0] - 32);
        for (int i = 1; i < s.size(); i++)
        {
            printf("%c", s[i] + 32);
        }
    }
    else if(count==0&&s[0]>=64&&s[0]<=90){
        for(int i=0;i<s.size();i++){
            printf("%c",s[i]+32);
        }

    }
}