#include<bits/stdc++.h>
using namespace std;
int fibonacciMemo(long long int n, vector<long long int> &memo)
{
    if (n <= 1)
        return n;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fibonacciMemo(n - 1, memo) + fibonacciMemo(n - 2, memo);

    return memo[n];
}

int main()
{
    long long int n;

    cin >> n;

    vector<long long int> memo(n + 1, -1);

    cout << fibonacciMemo(n, memo) << endl;

    return 0;
}
