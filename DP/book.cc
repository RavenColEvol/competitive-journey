#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
#define repr(i, a, b) for(ll i = a; i >= b; --i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;


int main()
{
	FIO;
    ll n, x; 
    cin >> n >> x;
    vector<ll> p(n), pp(n);
    for(ll& i : p) cin >> i;
    for(ll& i : pp) cin >> i;

    vll dp(x+1, 0);

    rep(i, 0, n) {
        repr(j, x, p[i]) {
            dp[j] = max(dp[j], dp[j - p[i]] + pp[i]);
        }
    }
    cout << dp[x] << '\n';
	return 0;
}