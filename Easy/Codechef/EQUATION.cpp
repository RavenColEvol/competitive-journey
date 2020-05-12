#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

ll ways(ll n) {
	if(n < 0) return 0;
	else return ((n + 1)*(n+2)*(n + 3)) / 6;
}

int main()
{
	FIO;
	ll t; cin >> t;
	while(t--) {
		ll n, a, b, c, tw = 0; cin >> n >> a >> b >> c;
		a++,b++,c++;
		ll ans = ways(n) - ways(n - a) - ways(n - b) - ways(n - c) + ways(n - a - b) + ways(n - a - c) + ways(n - b - c) - ways(n - a - b - c);
		cout << ans << '\n';
	}
	return 0;
}