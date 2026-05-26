#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, l, r;
        cin >> n >> k >> l >> r;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        int ans = 0;
        for(int i = 0; i < n; i++) {
            set<int> s;
            for(int j = i; j < n && (j - i + 1) <= r; j++) {
                s.insert(arr[j]);
                if((j - i + 1) >= l && s.size() == k)
                    ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
