#include <iostream>
using namespace std;

const int N = 1e5 + 10;
bool dp[N]; 

bool canReach(int current, int target)
{
    if (current == target)
        return true;
    if (current > target)
        return false;
    if (dp[current]) 
        return true;
    
    
    bool can = canReach(current * 10, target) || canReach(current * 20, target);
    
    dp[current] = can; 
    
    return can;
}

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        fill(dp, dp + n + 1, false);
        
        if (canReach(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
