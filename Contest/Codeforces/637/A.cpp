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
	int t; cin >> t;
	while(t--) {
		int n, a, b, c, d; cin >> n >> a >> b >> c >> d;
		bool flag = false;
		int mgw = (a+b)*n , mngw = (a-b)*n;
		for(int i = (c-d); i <= c+d; i++) {
			if((i/n <= mgw && i/n >= mngw)){
				flag = true;
				break;
			}
		}
		if(flag) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}