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

	vector<int> vi(n, 0);

	for(int& i : vi)
		cin >> i;

	ll ans = 0, count = 0;
	for(int i = 0; i < n ; i++)
	{
		if(vi[i] != 0)
			count++;
		else
			count = 0;

		ans = max(ans, count);
	}

	cout << ans << '\n';

	return 0;
}
	
