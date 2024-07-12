#include <bits/stdc++.h>
#define FAST_IO {ios_base::sync_with_stdio(false); cin.tie(0);}
using namespace std;
vector<int>v;
 
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        
        if (prime[p] == true) {

            for (int i = p * p; i <= n; i += p)

                prime[i] = false;
        }
    }
 
    for (int p = 2; p <= n; p++)
       { 
            if (prime[p])
            v.push_back(p);
       }
       cout<<v[n-1];
}
 
// Driver Code
int main()
{
    FAST_IO;
    int n;
    cin>>n;
    SieveOfEratosthenes(n);
    return 0;
}