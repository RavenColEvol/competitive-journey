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
const ll mex = 1e6 + 1;
ll dsu[mex];

void f(ll n) {
    rep(i, n) dsu[i] = i;
}

ll parent(ll n) {
    if(dsu[n] == n) return n;

    return dsu[n] = parent(dsu[n]);
}

void join(ll a, ll b) {
    a = parent(a);
    b = parent(b);

    if(a != b) {
        dsu[a] = b;
    }
}

int main(){
	optimize
    ll t;
    test(t) {
        ll n, r; cin >> n >> r;
        vector<vector<ll>> arr(n);
        f(n);
        rep(i, r) {
            ll x, y; cin >> x >> y;
            join(x, y);
        }
        rep(i, n) {
            parent(i);
        }
        map<ll, ll> mp;
        rep(i, n) {
            mp[dsu[i]]++;
        }
        cout << mp.size() << '\n';
        for(auto i = mp.rbegin(); i != mp.rend(); i++) {
            cout << (*i).second << ' ';
        }
        cout << '\n';
    }
	return 0;
}