#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define size(arr) sizeof(arr)/sizeof(arr[0])
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int solve(int n, int arr[3])
{
	if(n == 0)
		return 0;

	int res = INT_MIN;
	REP(i, 0, 2)
	{
		if(n >= arr[i])
		{
			res = max(res, 1 + solve(n - arr[i], arr));
		}
	}

	return res;
}

int main()
{
	fastio
	
	int n, arr[3];
	cin >> n >> arr[0] >> arr[1] >> arr[2];

	cout << solve(n, arr) << endl;

	return 0;
}