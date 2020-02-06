#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define size(arr) sizeof(arr)/sizeof(arr[0])
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int main()
{
	fastio
	int n;
	cin >> n;
	vector<int> vi(n, 0), dp(n, 0);
	REP(i, 1, n)
	{
		int j;
		cin >> j;
		vi[j]++;
	}

	dp[1] = vi[1];

	REP(i, 2, n-1)
	{
		dp[i] = max(dp[i-1], dp[i-2] + vi[i]*i);
	}

	cout << dp[n-1] << endl;

	return 0;
}