#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 2)
        cout << min(v[0], v[1]) << '\n';
    else
    {
        int mx = -1;
        for (int i = 0; i < n - 2; i++)
        {
            vector<int> h;
            for (int k = 0; k <= 2; k++){
                h.push_back(v[i + k]);
            }
            sort(h.begin(), h.end());
            mx = max(mx, h[1]);
        
        }
        cout << mx << '\n';
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        sol();

    return 0;
}
