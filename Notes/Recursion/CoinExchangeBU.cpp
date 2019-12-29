#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int coins[] = {1, 5, 10};
int dp[1000000];

int minCoin(int n, int m)
{
	// since we will use min( ) ; Initialize with INF ;
	REP(i, 0 , n)
		dp[i] = INT_MAX;

	// define base case
	dp[0] = 0;

	REP(i, 1, n) // SUM OF COINS
	{
		REP(j, 0, m-1) // NEXT COIN INDEX
		{
			if(coins[j] <= i)
			{	
				dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
			}
		}
	}

	return dp[n];
}

int main()
{
	fastio
	cout << minCoin(31, 3) << endl;
	return 0;
}