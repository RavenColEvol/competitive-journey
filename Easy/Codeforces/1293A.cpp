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
	int t;
	test(t) {
		int n, s, k;
		cin >> n >> s >> k;
		bool dp[n+1];
		for(bool& i : dp)
			i = 1;
		for(int i = 0; i < k; i++)
		{
			int closed;
			cin >> closed;
			dp[closed] = 0;
		}
		int up = 0, down = 0;
		bool foundup = false, founddown = false;
		for(int i = s; i < n+1; i++)
			if(dp[i] == 0)
				up++;
			else {
				foundup = true;
				break;
			}
		for(int i = s; i >= 1; i--)
			if(dp[i] == 0)
				down++;
			else {
				founddown = true;
				break;
			}
		if(foundup&&founddown)
		cout << min(up, down) << endl;
		else if(foundup)
			cout << up << endl;
		else 
			cout << down << endl;
	}
	return 0;
}