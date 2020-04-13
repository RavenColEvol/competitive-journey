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

int main(){
	optimize
	ll t;
	test(t)
	{
		ll a,b;
		cin >> a >> b;
		ll answer = 0;
		if(a == b) cout << -1 << '\n';

		else {
			for(ll i = 1, n = abs(a-b); i*i <= n; i++) {
				if(n % i == 0) {
					answer += 1;
					if(i != n/i) ++answer;
				}

				
			}
			cout << answer << '\n';
		}
	}
	return 0;
}