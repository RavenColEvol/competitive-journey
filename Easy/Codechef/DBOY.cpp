#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t, n, mx; cin >> t;
    while(t--) {
        cin >> n;
        vector<ll> h(n), p(n);
        mx = -1;
        for(ll& i : h) cin >> i, mx = max(mx, i);
        for(ll& i : p) cin >> i;

        sort(p.begin(), p.end());
        
        ll dp[1005][1005] = {0};

        for(ll i = 0; i <= 2*mx; i++)
            for(ll j = 1; j <= 2*mx; j++)
                dp[i][j] = 100000;

        dp[0][0] = 0;

        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= 2*mx; j++) {
                if(p[i-1] <= j)
                dp[i][j] = min(dp[i-1][j], dp[i][j - p[i-1]] + 1);
                else dp[i][j] = dp[i-1][j];
            }
        }

        /* DP TABLE
        ll mx = *max_element(h.begin(), h.end());
        for(ll i = 0; i <= n; i++) {
            for(ll j = 0; j <= mx*2; j++) cout << dp[i][j] << ' ';
            cout << '\n';
        }
        */
        

       ll ans = 0;
       for(ll i : h) ans += dp[n][2*i];
       cout << ans << '\n';
    }
	return 0;
}