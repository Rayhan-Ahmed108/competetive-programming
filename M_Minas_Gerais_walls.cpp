// ALLAH IS ALMIGHTY
// NEVER GIVE UP JEYAM
// TRY TRY & TRY

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
long long seg[4 * N], lazy[4 * N], arr[N];
int n, q;

void build(int idx, int l, int r) {
    if (l == r) {
        seg[idx] = arr[l];
        return;
    }
    int mid = (l + r) / 2;
    build(idx * 2, l, mid);
    build(idx * 2 + 1, mid + 1, r);
    seg[idx] = seg[idx * 2] + seg[idx * 2 + 1];
}

void propagate(int idx, int l, int r) {
    if (lazy[idx] != 0) {
        seg[idx] += (r - l + 1) * lazy[idx]; 
        if (l != r) { 
            lazy[idx * 2] += lazy[idx];
            lazy[idx * 2 + 1] += lazy[idx];
        }
        lazy[idx] = 0;
    }
}

void update(int idx, int l, int r, int ql, int qr, long long val) {
    propagate(idx, l, r);

    if (r < ql || qr < l) return; 
    if (ql <= l && r <= qr) { 
        lazy[idx] += val;
        propagate(idx, l, r);
        return;
    }

    int mid = (l + r) / 2;
    update(idx * 2, l, mid, ql, qr, val);
    update(idx * 2 + 1, mid + 1, r, ql, qr, val);
    seg[idx] = seg[idx * 2] + seg[idx * 2 + 1];
}

long long query(int idx, int l, int r, int ql, int qr) {
    propagate(idx, l, r);

    if (r < ql || qr < l) return 0; 
    if (ql <= l && r <= qr) return seg[idx];

    int mid = (l + r) / 2;
    return query(idx * 2, l, mid, ql, qr) +
           query(idx * 2 + 1, mid + 1, r, ql, qr);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            long long val;
            cin >> l >> r >> val;
            update(1, 1, n, l, r, val);
        } else {
            int l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l, r) << "\n";
        }
    }
    return 0;
}
