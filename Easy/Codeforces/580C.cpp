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


int ways(bool* arr, vll cats, ll m, ll index){
	if(m == 0)
}

int main(){
	optimize
	ll n,m;
	cin >> n >> m;
	vll cats(n);
	rep(i,n){
		cin >> cats[i];
	}
	bool arr[n+1][n+1] = {0};
	rep(i,n-1){
		int x,y;
		cin >> x >> y;
		arr[x][y] = 1;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cout << arr[i][j] << ' ';
		cout << endl;
	}
	cout << ways(arr, cats, m, 1) << endl;
	return 0;
}