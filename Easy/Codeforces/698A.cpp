#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{
	fastio;
	int dp[101][4];
	REP(i,0,100){
		REP(j,0,3){
			dp[i][j] = INT_MAX;
		}
	}
	int d;
	cin >> d;
	dp[0][0] = 1;
	dp[0][1] = dp[0][2] = dp[0][3] = 0;

	REP(i, 1, d) {
		int day;
		cin >> day;
		dp[i][0] = 1 + min({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
		if(day == 1)
		{
			dp[i][1] = min({dp[i-1][0],dp[i-1][2]});
		}
		else if(day == 2)
		{
			dp[i][2] = min({dp[i-1][0],dp[i-1][1]});
		}
		else if(day==3){
			dp[i][1] = min({dp[i-1][0],dp[i-1][2]});
			dp[i][2] = min({dp[i-1][0],dp[i-1][1]});
		}
	}
	cout << min({dp[d][0],dp[d][1],dp[d][2],dp[d][3]}) << endl;
	return 0;
}