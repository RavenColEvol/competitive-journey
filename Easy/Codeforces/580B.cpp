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
	int t, n;
	cin >> t >> n;
	vector<pair<int,int>> a(t);
	for(int i = 0; i < t; i++) cin >> a[i].first >> a[i].second;
	sort(a.begin(),a.end());
	ll ans = INT_MIN, s = 0;
	for(int i = 0, j = 0; i < t && j < t;) {
		while(j < t && (a[j].first - a[i].first) < n) {s+= a[j].second, j++;}
		ans = max(ans, s);
		s -= a[i].second;
		i++;
	}
	cout << ans << endl;
	return 0;
}