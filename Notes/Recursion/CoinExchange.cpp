#include<bits/stdc++.h>
#define REP(i, a, b) for(int i = a; i <= b; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int minCoin(int value, int coins[], int m)
{
	if(value==0)
		return 0;

	int answer = INT_MAX;
	REP(i, 0 , m-1){

		if(coins[i] <= value)
		{
			int temp = 1 + minCoin(value - coins[i], coins, m);
			
			if(answer > temp)
				answer = temp;
		}
	}

	return answer;
}

int main()
{
	int coins[] = {1, 5, 10};
	int n = 31;
	int m = sizeof(coins)/sizeof(coins[0]);
	cout << minCoin(n, coins, m);
	return 0;
}