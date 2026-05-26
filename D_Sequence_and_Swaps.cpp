#include<bits/stdc++.h>
using namespace std;

void sol() {
	int n, x, count = 0;
	cin >> n >> x;
	vector<int>v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	if(is_sorted(v.begin(), v.end())) {
		cout << 0 << endl;
		return;
	}
	for(int i = 0; i < n - 1; i++) {
		if(v[i] > x) {
			swap(x, v[i]);
			count++;
		}
		if(is_sorted(v.begin(), v.end())) {
			cout << count << endl;
            return;
		}
	}
	if(is_sorted(v.begin(), v.end())) {
		cout << count << endl;
		return;
	}
	cout << -1 << endl;
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		sol();
	}
}