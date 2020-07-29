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

ll msbpos(ll n) {
    if(n == 0) return 1;
    return log2(n) + 1;
}


int main(){
	optimize
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vll arr(n), msb;
        for(ll& i : arr) cin >> i, msb.push_back(msbpos(i));
        ll ans = 0LL;
        for(ll i = 0; i < n; i++) {
            for(ll j = i + 1; j < n; j++) {
                ll v = abs(((arr[i]<<msb[j])|(arr[j])) - ((arr[j]<<msb[i])|(arr[i])));
                ans = max(ans, v);
            }
        }
        cout << ans << '\n';
    }
	return 0;
}