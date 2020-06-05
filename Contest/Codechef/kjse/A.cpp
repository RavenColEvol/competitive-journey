#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define endl '\n'
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

ll be(ll a, ll p) {
    if(p == 0) return 1;
    ll res = be(a, p/2);
    res = res*res;
    if(p&1) res *= a;
    return res;
}

ll sog(ll n, ll k, ll r) {
    if(r == 1) return n*k;
    return (k * (be(r, n) - 1)) / (r - 1);
}

int main(){
	optimize
    ll t, ext = 0LL;
    test(t) {
        ll s, n, k, r; 
        cin >> s >> n >> k >> r;
        ll tot = sog(n, k, r);
        if(tot > s) cout << "IMPOSSIBLE " << tot - s << '\n', ext -= (tot - s);
        else cout << "POSSIBLE " << s - tot << '\n', ext += (s - tot);
    }
    if(ext >= 0) cout << "POSSIBLE\n";
    else cout << "IMPOSSIBLE\n";
	return 0;
}