#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v;

        string a;

        cin >> a;
        int temp;

        for (int i = 0; i < a.size(); i++)
        {
            int count = 0;

            for (int j = i + 1; j < a.size(); j++)
            {

                if (a[i] - 96 == a[j] - 96)
                {

                    count++;
                }
            }
            if (count == 0)
            {
                temp=i;
                break;
            }
        }
        for(int i=temp;i<a.size();i++){
            cout<<a[i];
        }
        cout<<'\n';
    }
}
