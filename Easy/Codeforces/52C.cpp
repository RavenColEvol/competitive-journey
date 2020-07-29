#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
ll seg[4000001], arr[1000001], lazy[4000001];
 
void build(ll i, ll start, ll end) {
    if(start == end) {
        seg[i] = arr[start];
        return;
    }
    ll mid = (start + end)/2;
    build(2 * i, start, mid);
    build(2 * i + 1, mid + 1, end);
    seg[i] = min(seg[2 * i] , seg[2 * i + 1]);
}
 
ll query(ll i, ll start, ll end, ll l, ll r) {
    if(l > end || r < start) return LLONG_MAX;
    
    if(lazy[i] != 0) {
        seg[i] += lazy[i];
        if(start != end) {
            lazy[2 * i] += lazy[i];
            lazy[2 * i + 1] += lazy[i];
        }
        lazy[i] = 0;
    }
    
    if(l <= start and end <= r) return seg[i];
    
    ll mid = (start + end)/2;
    return min(query(2*i, start, mid, l, r), query(2*i+1, mid+1, end, l, r));
}
 
void update(ll i, ll start, ll end, ll l, ll r, ll x) {
    if(lazy[i] != 0) {
        seg[i] += lazy[i];
        if(start != end) {
            lazy[2 * i] += lazy[i];
            lazy[2 * i + 1] += lazy[i];
        }
        lazy[i] = 0;
    }
    
    if(l > end || r < start) return;
    
    if(start >= l and end <= r) {
        seg[i] = seg[i] + x;
        if(start != end) {
            lazy[2 * i] += x;
            lazy[2 * i + 1] += x;
        }
        return;
    }
    
    ll mid = (start + end)/2;
    update(2 * i, start, mid, l, r, x);
    update(2 * i + 1, mid + 1, end, l, r, x);
    seg[i] = min(seg[2 * i], seg[2 * i + 1]);
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, q;
    cin >> n;
    
    for(ll i = 1; i <= n; i++)
        cin >> arr[i];
    build(1, 1, n);
    cin >> q;
    cin.get();
    for(ll i = 1; i <= q; i++) {
        string s;
        ll temp; 
        getline(cin, s);
        vector<ll> q;
        stringstream ss(s);
        while(ss >> temp) {
            q.push_back(temp);
        }
        if(q.size() == 2) {
            ll ans;
            if(q[0] > q[1]) {
                ans = min(query(1, 1, n, q[0]+1, n),
                query(1, 1, n, 1, q[1]+1));
            }else {
                ans = query(1, 1, n, q[0]+1, q[1]+1);
            }
            cout << ans << '\n';
        }
        else {
            if(q[0] > q[1]) {
                update(1, 1, n, q[0]+1, n, q[2]);
                update(1, 1, n, 1, q[1]+1, q[2]);
            }else {
                update(1, 1, n, q[0]+1, q[1]+1, q[2]);
            }
        }
        q.clear();
    }
    
    return 0;
}