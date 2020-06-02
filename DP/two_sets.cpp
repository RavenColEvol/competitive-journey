#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
using vvll = vector<vll>;

const int mod = 1e9 + 7, mex = 1e5;
ll ways;

vvll dp(501, vll(mex, -1));

ll solve(ll n, ll sum) {
    if(n == 0) return 0;
    if(sum == ways) {
        return 1LL;
    }
    if(dp[n][sum] != -1) return dp[n][sum];

    ll ans = 0LL;
    ans = solve(n-1, sum + n) + solve(n-1, sum);
    ans %= mod;
    return dp[n][sum] = ans;
}

int main()
{
	FIO;
    ll n; cin >> n;
    ways = (n * (n + 1)) / 2;
    if(ways & 1) cout << 0 << '\n';
    else {
        ways >>= 1;
        cout << solve(n, 0LL) << '\n';
    }
	return 0;
}