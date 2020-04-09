#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;
ll t, n, ans, price;
ll dp[100005];

int main()
{
	FIO;
	cin >> t;
    while(t--) {
        cin >> n;
        for(ll i = 0; i < n; i++) cin >> dp[i];
        sort(dp, dp+n, greater<ll>());
        ans = 0;
        for(int i = 0; i < n; i++) {
            price = dp[i] - i;
            if(price <= 0) break;
            ans = (ans + price) % MOD;
        }
        cout << ans << '\n';
    }
	return 0;
}