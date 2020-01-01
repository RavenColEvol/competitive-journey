#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{
	fastio
	
	ll t;
	cin >> t;

	while(t--)
	{
		ll n;
		cin >> n;

		vector<int> vi(n);

		for(int& i : vi)
			cin >> i;

		sort(vi.begin(), vi.end(), greater<int>());

		ll answer = 0;
		for(int i = 0; i < n; i += 2)
			answer += vi[i];

		cout << answer << '\n';
	}

	return 0;
}