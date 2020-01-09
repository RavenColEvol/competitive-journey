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

	int arr[] = {1, 1, 1, 1, 1, 1, 1, 1};

	int n = size(arr);
	int k = floor(log2(n)) + 1;

	int dp[n][k];

	REP(i, 0, n){
		REP(j, 0, k)
			dp[i][j] = 0;
	}

	REP(i, 0, n)
		dp[i][0] = arr[i];


	for(int j = 1; j <= k; j++)
		for(int i = 0; i + (1<<j) <= n; i++)
			dp[i][j] = dp[i][j-1] + dp[i + (1<<(j-1))][j-1];

	
	REP(i, 0, n){
		REP(j, 0, k)
			cout << dp[i][j] << ' ';
		cout << '\n';
	}

	int sum = 0;
	int L,R;
	cin >> L >> R;

	for(int j = k; j >= 0; j--)
	{
		if( (1<<j) <= R - L + 1)
		{
			sum += dp[L][j];
			L += (1<<j);
		}
	}

	debug(sum);

	return 0;
}