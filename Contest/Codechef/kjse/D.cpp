#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define endl '\n'
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

const int mod = 1e9 + 7, mex = 1e6 + 7;
ll dp[8005][8005];
ll solve(vll b, vll c, ll n, ll k) {
    if(n == 0) return 1;
    if(k == 0) return 0;

    ll ans = 0;
    ans = solve(b, c, n, k-1);
    rep(i, c[k-1]) {
        if(n >= b[k-1]) {
            n -= b[k-1];
            ans += solve(b, c, n, k-1);
        }
    }

    return  ans;
}

int main(){
	optimize
    ll t;
    test(t) {
        ll n, k, x; cin >> n >> k;
        vll b(k), c(k);
        for(ll& i : b) cin >> i;
        for(ll& i : c) cin >> i;
        repr(i, 0, k+1) dp[i][0] = 1;
        repr(i, 1, n+1) dp[0][i] = 0;

        repr(i, 1, k+1) {
            repr(j, 1, n+1) {
                x = 0;
                dp[i][j] = dp[i-1][j];
                repr(l, 0, c[i-1]) {
                    x += b[i-1];
                    if(x > j) break;
                    (dp[i][j] += dp[i-1][j - x]) %= mod;
                }
            }
        }
        cout << dp[k][n] << '\n';
    }
	return 0;
}