#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

const ll mod = 1e9 + 7;

ll be(ll n, ll p) {
    if(p == 0) return 1;

    ll r = be(n, p/2);

    (r *= r) %= mod;

    if(p&1) ( r *= n) %= mod;

    return r;
}

int main()
{
	FIO;
    ll t, a, b, c; cin >> t;
    while(t--) {
        cin >> a >> b >> c;
    }
	return 0;
}