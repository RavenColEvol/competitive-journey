#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fastio

	int dp[21][21];
	REP(i, 1, 20)
	{
		REP(j, 1, 20)
		{
			cin >> dp[i][j];
		}
	}
	
	int maximum = 0;

	REP(i, 1, 20)
	{
		REP(j, 1, 20)
		{
			// LEFT TO RIGHT
			if( j <= 17)
			{
				int product = 1;
				REP(k, 0, 3)
				{
					product *= dp[i][j + k];
				}
				maximum = max(product, maximum);
			}
			// TOP TO BOTTOM
			if(i <= 17)
			{
				int product = 1;
				REP(k, 0, 3)
				{
					product *= dp[i + k][j];
				}
				maximum = max(product, maximum);
			}
			// RIGHT BOTTOM
			if(i <= 17 && j <= 17)
			{
				int product = 1;
				REP(k, 1, 4)
				{
					product *= dp[i + k - 1][j + k - 1];
				}
				maximum = max(product, maximum);
			}
			// LEFT BOTTOM
			if(i <= 17 && j >= 4)
			{
				int product = 1;
				REP(k, 1, 4)
				{
					product *= dp[i + k - 1][j - k + 1];
				}
				maximum = max(product, maximum);
			}
		}
	}
	cout << maximum << endl;
	return 0;
}