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

	int n, q;
	cin >> n >> q;

	vector<int> arr(n);
	for(int& i : arr)
		cin >> i;

	vector<int> dp(n, 0);
	for(int i = 1; i<n ; i++)
	{
		if(arr[i-1] < arr[i])
			dp[i] = 1;
	}
	
	while(q--)
	{
		int l, r;
		cin >> l >> r;
		l--,r--;
		if(dp[l] == dp[l+1])
		{
			if(dp[r] != dp[l])
				cout << "YES" << endl;
			else 
				cout << "NO" << endl;
		}
		else{
			if(dp[l] == dp[r])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}

	}
	

	return 0;
}