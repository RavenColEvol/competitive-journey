#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{
	fastio
	
	int arr[] = {7, 2, 0 ,1 , 5};
	int MAXN = sizeof(arr)/sizeof(arr[0]);
	int k = floor(log(MAXN));

	int dp[MAXN][k + 1];

	for(int i = 0; i < MAXN; i++)
		dp[i][0] = arr[i];


	for(int j = 1; j <= k; j++)
		for(int i = 0; i + (1<<j) <= MAXN; i++)
			dp[i][j] = dp[i][j-1] + dp[i + (1<<(j-1))][j-1];


	int sum = 0;
	int L = 2, R = 4;
	for(int j = k; j >= 0; j--)
		if((1<<j) < R - L + 1)
		{
			sum += dp[L][j];
			L += (1<<j);
		}
	cout << sum << endl;
	return 0;
}