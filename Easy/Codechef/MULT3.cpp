#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;


ll arr[100005], seg[400005], lazy[400005];
ll n, q, t, l, r;

void build(ll at , ll start, ll end) {
    if(start == end) {
        seg[at] = 1;
        return ;
    }

    ll mid = (start + end)/2;
    build(2*at + 1, start, mid);
    build(2*at + 2, mid+1, end);
    seg[at] = seg[2*at+1] + seg[2*at+2];
}

void update(ll at, ll start, ll end, ll l, ll r) {
    if(start == end) {
        arr[start]++;
        if(arr[start] % 3 == 0) {
            seg[at] = 1;
        }
        else seg[at] = 0;
        return;
    }

    ll mid = (start + end)/2;
    if(l <= start and end <= r ) {
        update(2 * at + 1, start, mid, l, r);
    } 
    
    update(2 * at + 2, mid + 1, end, l, r);

    seg[at] = seg[2 * at + 1] + seg[2 * at + 2];
}


ll query(ll at , ll start , ll end, ll l, ll r) {
    if(l > end or r < start) return 0;
    
    if(l <= start and end <= r) {
        return seg[at];
    }

    ll mid = (start + end)/2;
    return query(2 * at + 1, start, mid, l, r) + query(2 * at + 2, mid + 1, end, l, r);
}


int main()
{
	FIO;
    cin >> n >> q;
    build(0, 0, n-1);
    
    for(ll i = 0; i < q; i++) {
        cin >> t >> l >> r;
        if(t) {
            update(0, 0, n-1, l, r);
            for(ll j = 0; j < 4 * n; j++) cout << seg[j] << ' ';
            cout << '\n';
            for(ll j = 0; j < n; j++) cout << arr[j] << ' ';
            cout << '\n';
        }else {
            cout << query(0, 0, n-1, l, r) << '\n';
        }
    }
	return 0;
}