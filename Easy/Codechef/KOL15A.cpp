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
	test(t) {
		string s; in s;
		ll sum = 0;
		for(int i = 0; s[i]; i++)
		{
			if(isdigit(s[i]))
				sum += (s[i] - '0');
		}
		out sum ;
		cout << '\n';
	}
	return 0;
}