#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int solve(int n)
{
	if(n==1) return 0;
	int a,b,c;
	a = b = c = INT_MAX;
	if(n >= 2)
		a = 1 + solve(n-1);
	if(n % 3 == 0)
		b = 1 + solve(n / 3);
	if(n % 2 == 0)
		c = 1 + solve(n / 2);
	return min({a,b,c});
}

int main()
{
	int n = 10;
	cout << solve(n) << endl;
	int dp[n+1] = {0};
	for(int i = 2; i <= n; i++)
	{
		dp[i] = dp[i-1] + 1;
		if(i%2==0)
			dp[i] = min(dp[i], 1+dp[i/2]);
		if(i%3==0)
			dp[i] = min(dp[i], 1+dp[i/3]);
	}
	cout << dp[n] << endl;
	return 0;
}