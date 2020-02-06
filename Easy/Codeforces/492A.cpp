#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

long long sum(int i)
{
	return (i * (i+1))/2;
}

int main()
{
	fastio
	ll n ;
	cin >> n;
	int dp[100000] = {0};
	dp[1] = 1;
	for(int i = 2; i < 100000; i++)
		dp[i] = dp[i-1] + sum(i);

	for(int i = 1;; i++)
	{
		if( n == dp[i]) {
			cout << i << endl;
			break;
		}
		else if(n < dp[i+1]) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}