#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minimumCoins(int sum)
{
    vector<int> dp(sum + 1, INT_MAX);

    dp[0] = 0;

    for (int i = 1; i <= sum; ++i)
    {
        if (i >= 1 && dp[i - 1] != INT_MAX)
        {
            dp[i] = min(dp[i], dp[i - 1] + 1);
        }
        if (i >= 3 && dp[i - 3] != INT_MAX)
        {
            dp[i] = min(dp[i], dp[i - 3] + 1);
        }
        if (i >= 5 && dp[i - 5] != INT_MAX)
        {
            dp[i] = min(dp[i], dp[i - 5] + 1);
        }
    }

   
    return dp[sum];
}

int main()
{
    int sum;
   
    cin >> sum;

    int minCoins = minimumCoins(sum);

    cout << minCoins << endl;

    return 0;
}
