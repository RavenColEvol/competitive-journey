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
	vector<int> vi = {3,2,1,2,2,3};
	map<int,int> mp;
	int ans = INT_MAX;
	for(int i = 0; i < vi.size(); i++) {
		if(mp[vi[i]] == 0)
			mp[vi[i]] = i;
		else{
			ans = min(ans, i - mp[vi[i]]);
			mp[vi[i]] = i;
		}
	}
	out ans << endl;
	return 0;
}