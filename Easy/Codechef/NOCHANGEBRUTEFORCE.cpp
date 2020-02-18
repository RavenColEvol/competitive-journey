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

pll position(vll coins, ll n, ll val) {
	rep(i,n) {
		if(val % coins[i] != 0) return {i,i}; 
	}
	rep(i,n-1) {
		repr(j,i+1,n) {
			if(coins[j]%coins[i] != 0) {
				return {coins[i],coins[j]};
			}
		}
	}
	return {-1,-1};
}

int main(){
	optimize
	ll t;
	test(t) {
		ll n, p; cin >> n >> p;
		bool flag = true;
		vll coins(n), answer(n,0); for(ll& i : coins) in i;

		pll res = position(coins, n, p);

		if(res.first == -1) {
			cout << "NO\n";
			flag = false;
		}
		else if(res.first != res.second){
			ll dig = (p / res.second);
			dig--;
			ll val = dig * res.second;
			ll count = 0;
			while(val < p) {
				val += res.first;
				count ++;
			}
			for(int i = 0; i < n; i++) {
				if(coins[i] == res.first) {
					answer[i] = count;
				}
				else if(coins[i] == res.second) answer[i] = dig;
			}
		}
		else {
			answer[res.second] = p / coins[res.second] + 1;
		}

		if(flag) {
			cout << "YES " ;
			rep(i,n) {
				cout << answer[i] << ' ';
			}
			out '\n';
		}
	}

	return 0;
}