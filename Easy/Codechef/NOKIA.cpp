#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

vector<int> dp(1005);

void precompute() {
	dp[0] = 0;
	dp[1] = 2;
	for(int i =  2; i < 1005; i++) {
		ll pos = i / 2 + 1;
		dp[i] = (i + 1) + dp[pos - 1] + dp[i - pos]; 
	}
}

ll maxl(ll s) {
	return (s*(3 + s))/2;
}

int main(){
	optimize
	precompute();
	// rep(i, 10) cout << dp[i] << ' ';
	out endl;
	ll t; in t;
	while(t--) {
		ll s, l; cin >> s >> l;
		if(l >= maxl(s)) cout << l - maxl(s) << '\n'; 
		else if(dp[s] > l) cout << -1 << '\n';
		else cout << 0 << '\n';
	}

	return 0;
}