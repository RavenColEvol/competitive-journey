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

int main(){
	optimize
    ll t, n, q, c; cin >> t;
    while(t--) {
        cin >> n >> q;
        string s; cin >> s;
        ll dp[26] = {0};
        for(ll i = 0; i < n; i++) {
            dp[ s[i] - 'a']++;
        }
        for(ll i  = 0; i < q; i++) {
            ll ans = 0;
            cin >> c;
            for(ll j = 0; j < 26; j++) {
                if(dp[j] > c) ans += dp[j] - c;
            }
            cout << ans << '\n';
        }
    }
	return 0;
}