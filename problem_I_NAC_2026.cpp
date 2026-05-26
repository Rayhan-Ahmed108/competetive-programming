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
string s;
cin >> s;
int m;
cin >> m;
for(int i = s.size() - 1; i >= 0; i--) {
    if(s[i] == 'C' or s[i] == 'K') continue;
    else {
        int j = i;
        while(j + 1 < s.size() && (s[j+1] == 'C' || s[j+1] == 'K') && m > 0) {
            swap(s[j], s[j+1]);
            m--;
            j++;
        }
    }
}
int count = 0, cnt = 0;
for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'A') cnt++;
    else {
        count += cnt;
    }
}
cout << count << endl;
}

int32_t main()
{
    FAST_IO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t;
    // cin >> t;
    // while(t--)
    sol();
}
