#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define test(t) while(t--)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

map<int,int> dp;

int main()
{
	fastio
	
	ll t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> vi(2*n);
		for(int& i:vi)
			cin >> i;

		sort(vi.begin(), vi.end());

		dp[vi[0]] = 1;

		for(int i = 1; i < 2*n ; i++)
		{
			if(dp[ vi[i] - vi[i-1]] == 0)
			{
				dp[vi[i]] = 1;
			}
			else if(dp[ vi[i] - vi[i-1] ] == 1){
				dp[vi[i]] = 2; 
			}
		}
	}

	return 0;
}