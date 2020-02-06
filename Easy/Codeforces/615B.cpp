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
	test(t){
		ll a,b,c, n;
		cin >> a >> b >> c >> n;
		ll eq = (a+b+c+n)/3;
		bool is_possible = (a+b+c+n)%3;
		if(is_possible == 0)
		{
			if(a <= eq && b <= eq && c <= eq)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}