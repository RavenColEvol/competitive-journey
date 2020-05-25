#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const int mex = 1e6 + 3;
long long dp[mex], coins[105];

int main()
{
	FIO;
	ll n, v; cin >> n >> v;
    for(ll i = 0; i < n; i++) cin >> coins[i];

    fill(dp, dp + mex, INT_MAX);

    dp[0] = 0LL;
    
    for(ll i = 0; i < n; ++i) {
        for(ll j = coins[i]; j <= v; ++j) {
            dp[j] = min(dp[j], 1LL + dp[j - coins[i]]);
        }
    }
    if(dp[v] == INT_MAX) cout << "-1\n";
    else cout << dp[v] << '\n';
	return 0;
}