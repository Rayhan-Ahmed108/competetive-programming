#include <iostream>
#include <algorithm>

using namespace std;

int mp(int sum, int a, int b, int c)
{
    int l[3] = {a, b, c};
    sort(l, l + 3, greater<int>());

    int mp = 0;

    for (int i = 0; i <= sum / l[0]; ++i)
    {
        for (int j = 0; j <= (sum - i * l[0]) / l[1]; ++j)
        {
            int k = (sum - i * l[0] - j * l[1]) / l[2];
            if (i * l[0] + j * l[1] + k * l[2] == sum)
            {
                mp = max(mp, i + j + k);
            }
        }
    }

    return mp;
}

int main()
{
    int sum, a, b, c;

    cin >> sum >> a >> b >> c;

    int result = mp(sum, a, b, c);
    cout << result << endl;

    return 0;
}
