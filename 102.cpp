#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int coinChange(vector<int> &coins, int need)
{

    vector<int> dp(need + 1, INT_MAX);

    dp[0] = 0;

    for (int i = 1; i <= need; ++i)
    {

        for (int coin : coins)
        {
            if (i - coin >= 0 && dp[i - coin] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    if (dp[need] == INT_MAX)
    {
        return -1;
    }
    else
    {
        return dp[need];
    }
}

int main()
{
    int n, need;
    cin >> n >> need;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    int result = coinChange(coins, need);

    if (result != -1)
    {
        cout << result << endl;
    }
    else
    {
        cout << "It is not possible to make the amount with the given coins." << endl;
    }

    return 0;
}
