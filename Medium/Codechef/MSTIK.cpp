#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{
	fastio
	
	ll n;
	cin >> n;
	vector<int> vi(n);
	for(int& i:vi)
		cin >> i;

	int k = floor(log2(n)) + 1;

	int mins[n][k], maxs[n][k];
	for(int i = 0; i < n; i++)
		mins[i][0] = maxs[i][0] = vi[i];

	for(int j = 1; j <= k; j++)
	{
		for(int i = 0; i + (1<<j) <= n; i++)
		{
			mins[i][j] = min(mins[i][j-1], mins[i + (1<<(j-1))][j-1]);
			maxs[i][j] = max(maxs[i][j-1], maxs[i + (1<<(j-1))][j-1]);
		}
	}

	int q;
	cin >> q;
	for(int i = 0; i<q; i++)
	{
		int L, R;
		cin >> L >> R;
		int j = log2(R-L+1);
		float l = min(mins[L-1][j], mins[R - (1<<j) + 1][j]) ;
		float u =  max(maxs[L-1][j], maxs[R - (1<<j) + 1][j]);

		cout << (l + (u-l)/2.0) << endl;
	}

	return 0;
}