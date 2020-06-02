#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
using vv = vector<vll>;

int main()
{
	FIO;
    ll a, b; cin >> a >> b;
    vv dp(a + 1, vll(b+ 1));
    rep(i, 0, a +1) {
        rep(j, 0, b+1) {
            if(i == j) dp[i][j] = 0;
            else {
                dp[i][j] = INT_MAX;
                for(ll k = 1; k < i; k++) {
                    dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j] + 1);
                }
                for(ll k = 1; k < j; k++) {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k] + 1);
                }
            }
        }
    }
    cout << dp[a][b] << '\n';
	return 0;
}

