#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll n, k, d;
vector<vector<ll>> dp(101, vector<ll>(2,-1));

ll solve(ll sum , bool chk) {
    if(sum == n && chk == 1) return 1;
    if(sum == n && chk == 0) return 0;

    if(sum > n) return 0;

    if(dp[sum][chk] != -1) return dp[sum][chk];

    ll ans = 0LL;

    for(ll i = 1; i <= k; i++) {
        if(i < d) {
            ans = ( ans + solve(sum + i, chk) ) % MOD;
        }
        else if(i >= d){
            ans = ( ans + solve(sum + i, 1) ) % MOD;
        }
    }

    return dp[sum][chk] = ans % MOD;
}

int main()
{
	FIO;
	cin >> n >> k >> d;
    cout << solve(0, 0) << '\n';
	return 0;
}