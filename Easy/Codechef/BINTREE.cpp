#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;

using namespace std;

ll solve(ll a, ll b) {
	ll count = 0;

	while(a != b) {
		( a > b) ? a >>= 1 : b >>= 1;
		count ++;
	}

	return count;
}

int main()
{
	flashio
	// Your code here
	ll test;
	cin >> test;
	while(test--) {
		ll a, b;
		cin >> a >> b;
		cout << solve(a,b) << '\n';
	}
	return 0;
}