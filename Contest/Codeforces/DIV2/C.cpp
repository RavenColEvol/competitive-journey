#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
	ll t; cin >> t;
	rep(x, 0, t) {
		ll n; cin >> n;
		string a, b;
		cin >> a >> b;
		
		bool possible = true;
		rep(i, 0, n) {
			if(a[i] > b[i]) {
				possible = false;
				break;
			}
		}
		if(!possible) {
			cout << "-1\n";
			continue;
		}
		ll ans = 0;
		for(char i = 'a'; i != 'u'; i++) {
			vll idx;
			char mn = 'u';
			for(ll j = 0; j < n; j++) {
				if(a[j] != b[j] and a[j] == i) {
					idx.push_back(j);
					mn = min(mn, b[j]);
				}
			} 
			if(!idx.empty()) {
				ans++;
				for(ll j : idx) {
					a[j] = mn;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
