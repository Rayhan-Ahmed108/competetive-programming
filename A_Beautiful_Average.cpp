#include <iostream>
#include <vector>
#include <set>
using namespace std;

const int max_len = 21000;
const int base1 = 131;
const int base2 = 1313;
const int mod1 = 1000000007;
const int mod2 = 1000000009;

long long power1[max_len];
long long power2[max_len];

void precompute_power() {
    power1[0] = 1;
    power2[0] = 1;
    for (int i = 1; i < max_len; i++) {
        power1[i] = power1[i-1] * base1 % mod1;
        power2[i] = power2[i-1] * base2 % mod2;
    }
}

int main() {
    precompute_power();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b = a;
        vector<int> ans;
        for (int op = 0; op < k; op++) {
            int m = b.size();
            vector<long long> H1_1(m+1, 0), H1_2(m+1, 0);
            for (int i = 0; i < m; i++) {
                H1_1[i+1] = (H1_1[i] * base1 + b[i]) % mod1;
                H1_2[i+1] = (H1_2[i] * base2 + b[i]) % mod2;
            }

            vector<int> c(m);
            for (int i = 0; i < m; i++) {
                c[i] = b[m-1-i];
            }

            vector<long long> H2_1(m+1, 0), H2_2(m+1, 0);
            for (int i = 0; i < m; i++) {
                H2_1[i+1] = (H2_1[i] * base1 + c[i]) % mod1;
                H2_2[i+1] = (H2_2[i] * base2 + c[i]) % mod2;
            }

            set<int> S;
            S.insert(b[m-1]);
            for (int j = 0; j < m-1; j++) {
                int L = m - 1 - j;
                long long forward1 = (H1_1[m] - H1_1[j+1] * power1[L] % mod1 + mod1) % mod1;
                long long forward2 = (H1_2[m] - H1_2[j+1] * power2[L] % mod2 + mod2) % mod2;
                long long reverse1 = H2_1[L];
                long long reverse2 = H2_2[L];
                if (forward1 == reverse1 && forward2 == reverse2) {
                    S.insert(b[j]);
                }
            }

            int x = 1;
            while (x <= n && S.find(x) != S.end()) {
                x++;
            }
            if (x > n) {
                x = 1;
            }
            ans.push_back(x);
            b.push_back(x);
        }

        for (size_t i = 0; i < ans.size(); i++) {
            cout << ans[i];
            if (i < ans.size() - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}