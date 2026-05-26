#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstring>
#include <numeric>
using namespace std;
#define endl "\n"
const int mod = 1e9 + 7;
const long long INF = 1e18;
#define int long long int
#define FAST_IO                           \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }

int binexp( int a,int b){ int ans=1; a=a%mod; while(b){if(b&1){ans=(ans*a)%mod;}a=(a*a)%mod;b>>=1;}return ans;}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
#define vi      vector<int>
#define int     long long int
#define yes     cout << "YES\n";
#define no      cout << "NO\n"; 

void sol() {
int a, b, c, x;
cin >> a >> b >> c >> x;

//only a
int p1 = 0, p2 = 0, p3 = 0;
int need1 = 1LL * (x / a) - 1LL * (x / lcm(a, b)) - 1LL * (x / lcm(a, c)) + 1LL * (x / lcm(a, lcm(b, c)));//a eka gese jokhon
p1 += 1LL * need1 * 6;
int need2 = 1LL * (x / (lcm(a, c))) - 1LL * (x / lcm(a, lcm(b, c)));//only a and c
p1 += 1LL * (need2 * 3);//ac
int need3 = 1LL * (x / lcm(a, b)) - 1LL * (x / lcm(a, lcm(b, c)));//only a and b
p1 += 1LL * (need3 * 3);//ab;
p1 += (x / lcm(a, (lcm(b, c)))) * 2 * 1LL;

//only b
int need4 = 1LL * (x / b) - 1LL * (x / lcm(a, b)) - 1LL * (x / lcm(b, c)) + 1LL * (x / lcm(a, lcm(b, c)));//b eka
p2 += 1LL * need4 * 6;
int need5 = 1LL * (x / (lcm(a, b))) - 1LL * (x / lcm(a, lcm(b, c)));//only ab
p2 += 1LL * (need5 * 3);//ab
int need6 = 1LL * (x / lcm(c, b)) - (x / lcm(a, lcm(b, c)));//only bc
p2 += 1LL * (need6 * 3);//cb;
p2 += 1LL * (x / lcm(a, (lcm(b, c)))) * 2;

//only c
int need7 = 1LL * (x / c) - 1LL * (x / lcm(c, b)) - 1LL * (x / lcm(a, c)) + 1LL * (x / lcm(a, lcm(b, c)));//c eka
p3 += 1LL * need7 * 6;
int need8 = 1LL * (x / (lcm(a, c))) - 1LL * (x / lcm(a, lcm(b, c)));//only ac
p3 += 1LL * (need8 * 3);//ac
int need9 = 1LL * (x / lcm(c, b)) - 1LL * (x / lcm(a, lcm(b, c)));//only bc
p3 += 1LL * (need9 * 3);//cb;
p3 += 1LL * (x / lcm(a, (lcm(b, c)))) * 2;
cout << p1 << ' ' << p2 << ' ' << p3 << endl;
}

int32_t main()
{
    FAST_IO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--)
    sol();
}

