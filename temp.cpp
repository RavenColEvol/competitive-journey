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

ll solve(vll v, ll x) {
	if(x == 0) return 0;
	ll sol = INT_MAX;
	for(int i : v) {
		if(x - i >= 0) sol = min(sol, solve(v, x-i) + 1);
	}
	return sol;
}

int main(){
	optimize
	vll v = {1,3,5};
	ll x = 12;
	vll dp(x+1,INT_MAX), first(x+1);
	dp[0] = 0;
	for(ll i = 1; i <= x; i++) {
		for(ll j : v) {
			if(i-j >= 0 && dp[i-j] + 1 < dp[i])
			dp[i] = dp[i-j] + 1, first[i] = j;
		}
	}
	ll n = x;
	for(ll i : first) cout << i << ' ';
	cout << '\n';
	while(n > 0) {
		cout << first[n] << ' ';
		n -= first[n];
	}
	cout << '\n';
	cout << dp[x] << '\n';
	return 0;
}