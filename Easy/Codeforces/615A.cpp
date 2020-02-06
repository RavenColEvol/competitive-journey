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
		ll n; in n;
		ll temp = n;
		int count = 0;
		set<int> ans;
		for(ll i = 2; i*i <= n; i++)
		{
			if(count == 2) {
				ans.insert(temp);
				break;			
			}
			if(temp % i == 0)
			{
				count++;
				temp /= i;
				ans.insert(i);
			}
		}
		if(ans.size() == 3)
		{
			out "YES\n";
			for(int i : ans)
				cout << i << ' ';
			out '\n';
		}
		else 
			out "NO\n";
	}
	return 0;
}