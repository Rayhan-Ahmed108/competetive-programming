#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    int p = 100000000;
    int a, b;
    cin >> a >> b;
    
    int lp = -1, temp, temp1;
    vector<pair<int, int> > v;
    
    for (int i = 0; i < b; i++)
    {
        int x, y;
        cin >> x >> y;
        double ans = static_cast<double>(x) / y; // Cast to double for accurate division
        if (ans > lp)
        {
            lp = ans;
            temp = y;
            temp1 = x;
        }
        v.push_back(make_pair(x, y));
    }
    
    int result = (a / temp1) * temp;
    int u = a % temp1; // u should be an integer
    
    if (u == 0)
    {
        cout << result;
    }
    else
    {
        for (auto it : v)
        {
            if (it.first >= u && it.second < p) // Corrected parenthesis
            {
                p = it.second; // Corrected function call syntax
            }
        }
        cout << result + p;
    }
    return 0;
}
