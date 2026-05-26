#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;
#define endl "\n"
const int mod = 1e9 + 7;
const long long INF = 1e18;
#define FAST_IO                           \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }

int binexp( int a,int b){ int ans=1; a=a%mod; while(b){if(b&1){ans=(ans*a)%mod;}a=(a*a)%mod;b>>=1;}return ans;}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

#define vi      vector<int>
#define int     long long int
#define yes     cout << "YES\n";
#define no      cout << "NO\n"; 

void sol() {
int n;
cin >> n;
string s;
cin >> s;
vi v;
for(int i = 0; i < n; i++) {
    if(s[i] != '1') {
        v.push_back(i + 1);
    }
}
/*
choose 2 delete 2 cost = 2
choose 2 delete 6 cost = 2 + 2 = 4
choose 2 delete 10 cost = 4 + 2 = 6
choose 2 delete 12 cost = 6 + 2 = 8
choose 13 delete 13 cost = 8 + 13 = 21
choose 7 delete 7 cost = 21 + 7= 28
choose 5 delete 5 cost = 28 + 5= 33
choose 1 delete 1 cost = 33 + 1 = 34
1, 3, 4, 5, 7, 8, 9, 11, 13, 14, 15
3, 4, 8, 9, 11, 14, 15
*/
int cost = 0;


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