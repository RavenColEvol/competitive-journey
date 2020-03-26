#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define endl '\n'
#define N 100005
using namespace std;

int n, t, a, l, r;
vector<int> lazy(4*N, 0);
vector<int> seg(4*N, 0);


void upd(int pos, int s, int e, int x) {
    if(x) {
        lazy[pos]^=1;
        seg[pos] = (e-s+1) - seg[pos];
    }
}

void shift(int pos, int s, int e) {
    int mid = (s + e)/2;
    upd(2*pos + 1, s, mid, lazy[pos]);
    upd(2*pos+2, mid+1, e, lazy[pos]);
    lazy[pos] = 0;
}

void update(int l, int r, int v, int pos = 0, int s = 0, int e = n - 1) {
    if(r < s || l > e) return ;
    if(l <= s && r>= e) {
        upd(pos, s, e, v);
        return ;
    }
    shift(pos, s, e);
    int mid = (s + e) / 2;
    update(l, r, v, 2*pos + 1, s, mid);
    update(l, r, v, 2*pos + 2, mid + 1, e);
    seg[pos] = (seg[2*pos + 1] + seg[2*pos + 2]);
}

int query(int l, int r, int pos = 0, int s = 0, int e = n-1) {
    if(l > e || r < s) return 0;
    if(l <= s && r >= e) return seg[pos];
    shift(pos, s, e);
    int mid = (s+e)/2;
    return (query(l,r,2*pos+1,s,mid) + query(l,r,2*pos+2,mid + 1,e));
}

int main()
{
    FIO
    cin >> n >> t;
    while(t--) {
        cin >> a >> l >> r;
        if(a) cout << query(l,r) << endl;
        else update(l,r, 1);
    }
    return 0;
}