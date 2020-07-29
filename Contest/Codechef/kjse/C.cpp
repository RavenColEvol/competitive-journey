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
		vector<vector<ll>> g(n, vector<ll>(n));
		for(ll i = 0; i < n; i++)
			for(ll j = 0; j < n; j++)
				cin >> g[i][j];

		vector<ll> d(n, INT_MAX);

		d[0] = g[0][0];
		
		for(ll i = 0; i < n; i++) {
			for(ll j = 0; j < n; j++) {
				if(d[i] + g[i][j] < d[j]) {
					d[j] = d[i] + g[i][j];
				}
			}
		}

		bool possible = false;
		
		for(ll i : d) {
			if(i < -10) {
				possible = true;
				break;
			}
		}
		if(possible) {
			cout << "YES\n";
			continue;
		}
		
		for(ll i = 0; i < n; i++) {
			if(possible) break;
			for(ll j = 0; j < n; j++) {
				if(d[i] + g[i][j] < d[j]) {
					possible = true;
					break;
				}
			}
		}
		if(possible) {
			cout <<"YES\n";
			continue;
		}
		cout << "NO\n";
	}
	return 0;
}