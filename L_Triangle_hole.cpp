// ALLAh IS ALMIGhTY
// NEVER GIVE UP JEYAM
// TRY TRY & TRY
#include <bits/stdc++.h>
using namespace std;
#define int     long double
void sol() {
    int h;
    long long k;
    cin >> h >> k;

    int ans1 = h * h / sqrtl((int)3.0);
    int fac = powl((int)0.25, (int)k); 
    int ans = ans1 * fac;

    cout << fixed << setprecision(6) << ans << "\n";

}
int32_t main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t;
    // cin >> t;
    // while(t--)
    sol();
}