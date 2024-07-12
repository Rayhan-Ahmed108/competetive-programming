#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin >> t;
    while (t--)
    {

        string s;
        int count = 0,temp=-1;

        cin >> s;
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {

            if (s[i] == s[j])
            {
                continue;
            }
            else
            {
                j = s.size();
                temp=i;
            }
        }
        printf("Case %d: ",k );
        if(temp<0)
        cout<<s.size()<<'\n';
        else
        cout << temp+1+s.size() << '\n';
        k=k+1;
    }
}