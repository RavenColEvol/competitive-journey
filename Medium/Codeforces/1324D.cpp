#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

int main(){
	optimize

    ll t, x; in t;
    vector<ll> dp(t);

    for(ll& i: dp) {
        cin >> i;
    }

    rep(i,t) {
        in x;
        dp[i] -= x;
    }

    sort(dp.begin(), dp.end());

    ll ans = 0LL;

    rep(i, t) {
        if(dp[i] <= 0) continue;
        int j = lower_bound(dp.begin(), dp.end(), 1 - dp[i]) - dp.begin();
        ans += i - j;
    }

    out ans ;

	return 0;
}