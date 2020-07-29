#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
	ll a, b, c, d; 
    cin >> a >> b >> c >> d;
    ll ans = 256 * min({a, c, d}) + 32 * min(a - min({a, c, d}), b);
    cout << ans << '\n';
	return 0;
}
