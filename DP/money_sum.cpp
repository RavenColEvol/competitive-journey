#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

const int mex = 1e5 + 5;
vll dp(mex);

int main()
{
	FIO;
    ll n; cin >> n;
    vll arr(n);
    rep(i, 0, n) cin >> arr[i];
    dp[0] = 1;
    for(ll j : arr) {
        for(ll i = mex - 1; i >= j; --i)
            dp[i] = max(dp[i], dp[i - j]);
    }
    vector<ll> ans;
    rep(i, 1, mex) {
        if(dp[i]) ans.push_back(i);
    }
    cout << ans.size() << '\n';
    for(ll i : ans) cout << i << ' ';
	return 0;
}