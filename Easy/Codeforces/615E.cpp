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
	ll m,n;
	cin >> m >> n;

	ll arr[m][n];
	for(ll i = 0; i < m; i++)
	{
		for(ll j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	ll ans = 0;

	for(int i = 0; i < n ; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(arr[i][j] == i+1){
				ans += (j+1);
				break;
			}
		}
	}

	cout << ans ;

	return 0;
}