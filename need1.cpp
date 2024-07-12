#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int minimumCoins(int sum, int &minCoins1)
{

    vector<int> dp(sum + 1, INT_MAX);

    vector<int> count1(sum + 1, INT_MAX);

    dp[0] = 0;
    count1[0] = 0;

    for (int i = 1; i <= sum; ++i)
    {

        if (i >= 1 && dp[i - 1] != INT_MAX)
        {
            if (dp[i - 1] + 1 < dp[i])
            {
                dp[i] = dp[i - 1] + 1;
                count1[i] = count1[i - 1] + 1;
            }
            else if (dp[i - 1] + 1 == dp[i] && count1[i - 1] + 1 < count1[i])
            {
                count1[i] = count1[i - 1] + 1;
            }
        }
        if (i >= 3 && dp[i - 3] != INT_MAX)
        {
            if (dp[i - 3] + 1 < dp[i])
            {
                dp[i] = dp[i - 3] + 1;
                count1[i] = count1[i - 3];
            }
            else if (dp[i - 3] + 1 == dp[i] && count1[i - 3] < count1[i])
            {
                count1[i] = count1[i - 3];
            }
        }
        if (i >= 5 && dp[i - 5] != INT_MAX)
        {
            if (dp[i - 5] + 1 < dp[i])
            {
                dp[i] = dp[i - 5] + 1;
                count1[i] = count1[i - 5];
            }
            else if (dp[i - 5] + 1 == dp[i] && count1[i - 5] < count1[i])
            {
                count1[i] = count1[i - 5];
            }
        }
    }

    minCoins1 = count1[sum];

    return minCoins1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum;
        cin >> sum;

        int minCoins1;
        int minCoinsTotal = minimumCoins(sum, minCoins1);

        cout << minCoinsTotal << '\n';
    }
}