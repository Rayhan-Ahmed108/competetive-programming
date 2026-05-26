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

const int N = 1e6 + 9;

vector<int> primes;
bool is_prime[N]; 
// use bitset<N> is_prime; to have O(N/64) memory complexity
// using bitset you can solve upto around N = 10^8 in 1s

// sieve with smallest prime factors (spf)
int spf[N];
void sieve() {
  for (int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for (int i = 2; i * i < N; i++) {
    if (spf[i] == i) {
      for (int j = i * i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
  }
}

void sol() {
int n, x;
cin >> n >> x;
vi v(n), pre(n);
for(int i = 0; i < n; i++) {
    cin >> v[i];
    pre[v[i]]++;
}
int fr[N];
for(int i = 2; i <= x; i++) {
    int ans = i;
    while(ans != 1) {
        fr[spf[ans]]++;
        ans /= spf[ans];
    }
}
for(int i = 2; i <= x; i++) {
    int down = fr[i];
    if(down == 0) continue;
    if(pre[i] >= fr[i]) continue;
    
}
}

int32_t main()
{
    FAST_IO
    sieve();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t;
    // cin >> t;
    // while(t--)
    sol();
}