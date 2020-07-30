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

ll n, k, z;
ll arr[100005];
map<tuple<ll, ll, bool, ll>, ll> dp;

ll solve(ll m = 0, ll at = 0, bool hl = false, ll l = z) {
    if(m == k + 1) return 0;
    ll ans = 0;

    if(dp[make_tuple(m, at, hl, z)] != 0) return dp[make_tuple(m, at, hl, z)];

    if(at < n) {
        ans = solve(m + 1, at + 1, false, l); 
    }
    if(at > 0 and hl == false and l)
        ans = max(ans, solve(m + 1, at - 1, true, l-1));

    ans += arr[at];
    return dp[make_tuple(m, at, hl, z)] = ans;
}

int main(){
	optimize
    ll t; cin >> t;
    while(t--) {
        cin >> n >> k >> z;
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << solve() << '\n';
        dp.clear();
    }
	return 0;
}