#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

long long int dp[1000000] = {0};

ll count(long long int n)
{
	if(n == 1)
		return dp[1] = 1;

	if(n < 1000000 && dp[n] != 0)
		return dp[n];

	long long c ;

	if(n&1)
		c = 1 + count( 3*n + 1);
	else 
		c = 1 + count( n/2 );
	
	if(n<1000000)
		dp[n] = c;

	return c;
}

int main()
{
	ll answer = 0, prev_count = 0;
	for(ll i=1; i<1000000; i++)
	{
		if(prev_count < count(i))
		{
			prev_count = count(i);
			answer = i;
		}
	}
	cout << answer << endl;
	return 0;
}