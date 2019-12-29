#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fastio
	bool dp[2000000];
	memset(dp, 1, 2000000*sizeof(dp[0]));
	dp[0] = dp[1] = 0;
	for(int i = 2; i * i <= 2000000; i++ )
	{
		if(dp[i]==true)
		{
			for(int j= i*i ; j <= 2000000; j+= i)
			{
				dp[j] = false;
			}
		}
	}
	unsigned long long int sum = 0LL;
	for(int i = 2; i <= 2000000; i++)
	{
		if(dp[i])
			sum += (unsigned long long int)(i);
	}
	cout << sum << endl;
	return 0;
}