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

    ll t, x, y, z, sum = 0; cin >> t;
    vector<ll> dp(10);
    while(t--) {
        cin >> x >> y >> z;
        dp[y]++, dp[z]++;
        sum = y + z;
        rep(i, (x-2)) {
            dp[sum % 10]++;
            sum = (sum % 10);
        }
        sum = 0;
        rep(i, 10) {
            sum = (sum + i*dp[i]) % 3;
        }
        if(sum == 0)
            cout << "YES\n";
        else cout << "NO\n";
    }

	return 0;
}