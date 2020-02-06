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
	int n, d;
	cin >> n >> d;
	vector< pair<int, int> > arr;
	REP(i,1, n){
		int a,b;
		cin >> a >> b;
		arr.emplace_back(make_pair(a, b));
	}

	ll ans = 0;
	for(int i = 0; i < n; i++)
	{
		ll val = arr[i].second;
		for(int j = i + 1; j < n; j++)
		{
			if( abs(arr[i].first - arr[j].first) <= d)
			{
				val += arr[j].second;
			}
		}
		ans = max(ans, val);
	}

	cout << ans << endl;

	return 0;
}