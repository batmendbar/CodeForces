//segment tree for max

#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
const int INF = 1e9;

vector<int> seg_tree(4*N);
vector<int> v(N);

void build(int l, int r, int k) {
    if (l == r) {
        seg_tree[k] = v[l];
        return;
    }
    int mid = (l + r) / 2;

    build(l, mid, 2*k);
    build(mid+1, r, 2*k+1);
    seg_tree[k] = max(seg_tree[2*k], seg_tree[2*k+1]);
    return;
}

int query(int l, int r, int ll, int rr, int k) {
    if (ll <= l && r <= rr) return seg_tree[k];
    if (r < ll || rr < l) return -INF;
    int mid = (l + r) / 2;
    return max(query(l, mid, ll, rr, 2*k), query(mid + 1, r, ll, rr, 2*k + 1));
}

void update(int l, int r, int pos, int val, int k) {
    if (l == pos && r == pos) {
        seg_tree[k] = val;
        return;
    }
    if (pos < l || r < pos) return;
    int mid = (l + r) / 2;
    update(l, mid, pos, val, 2*k);
    update(mid+1, r, pos, val, 2*k+1);
    seg_tree[k] = max(seg_tree[2*k], seg_tree[2*k+1]);
    return;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    build(0, n-1, 1);
    
    int m;
    cin >> m;
    for (int i = 0, l, r; i < m; i++) {
        cin >> l >> r;
        cout << query(0, n-1, l, r, 1);
    }
}