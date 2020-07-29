#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

ll sum(ll idx, vll ft) {
    ll ans = 0LL;
    while(idx >= 0) {
        ans += ft[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}

ll query(ll l, ll r,vll ft) {
    return sum(r, ft) - sum(l-1, ft);
}

void add(ll idx, ll v, vll& ft) {
    while(idx < ft.size()) {
        ft[idx] += v;
        idx += (idx & (-idx));
    }
}

void buildFT(vll arr, vll& ft) {
    for(ll i = 0; i < arr.size(); i++) {
        add(i, arr[i], ft);
    }
}

int main()
{
	FIO;
    ll n; cin >> n;
    vll arr(n), ft(n, 0);
    for(ll& i : arr) cin >> i;
    buildFT(arr, ft);
    ll q; cin >> q;
    for(ll i = 0; i < q; i++) {
        ll a, b, c; cin >> a >> b >> c;
        if(a == 0) {
            add(b-1, c, ft);
            arr[b-1] = c + arr[b-1];
        } else {
            ll x = query(b-1, c-1, ft);
            ll y = c - b + 1;
            cout << (x / y + (x % y != 0)) << '\n';
        }
    }
	return 0;
}