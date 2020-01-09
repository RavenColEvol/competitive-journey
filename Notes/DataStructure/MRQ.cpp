#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b ; i++)
#define size(arr) sizeof(arr)/sizeof(arr[0])
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int main()
{
	fastio
	
	ll arr[] = {1, 7, 3, 2, 1, -1};
	ll N = size(arr);
	ll k = floor(log2(N)) + 1;

	ll dp[N][k];

	REP(i, 0, N)
		REP(j, 0, k)
			dp[i][j] = 0;

	REP(i, 0, N)
		dp[i][0] = arr[i];


	// Dynammic Fill
	for(int j = 1; j <= k ; j++)
		for(int i = 0; i + (1<<j) <= N; i++)
			dp[i][j] = min(dp[i][j-1], dp[i + (1<<(j-1))][j-1] );


	/* CHECK TABLE
	REP(i, 0, N){
		REP(j, 0, k)
			cout << dp[i][j] << ' ';
		cout << '\n';
	}
	*/
	int L, R;
	cin >> L >> R;
	ll ans = INT_MAX;
	for(int j = k ; j >=0 ; j--)
	{
		if( (1<<j) <= R - L + 1){
			ans = min(ans, dp[L][j]);
			L += (1<<j);
		}
	}

	debug(ans);
	
	return 0;
}