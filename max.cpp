#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, bool> memo; 

bool canReach(int current, int target)
{
    
    if (memo.find(current) != memo.end())
        return memo[current];
    if (current == target)
        return true;
    if (current > target)
        return false;

    memo[current] = canReach(current * 10, target) || canReach(current * 20, target);
    return memo[current];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        if (canReach(1, N))
            cout << "YES" << '\n';
        else
            cout << "NO\n";
    }
}
