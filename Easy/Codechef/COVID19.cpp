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

int main(){
	optimize
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> d(n);
        for(ll& i : d) cin >> i ;
    
        ll mx = 0, mn = n;
        for(ll i = 0; i < n; i++) {
            ll l = i - 1, r = i + 1, c = 1;
            while(l >= 0) {
                if(d[l+1] - d[l] <= 2) {
                    c++, l--;
                }
                else break;
            }
            while(r < n) {
                if(d[r] - d[r-1] <= 2) {
                    c++, r++;
                }
                else break;
            }
            mx = max(c, mx);
            mn = min(c, mn);
        }
        cout << mn << ' ' << mx << '\n';
    }
	return 0;
}