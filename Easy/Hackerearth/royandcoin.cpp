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

int n, m, temp;

int main(){
	optimize
    cin >> n >> m;
    vector<int> dp(n+2);
    while(m--) {
        int l, r; cin >> l >> r;
        dp[l]++, dp[r+1]--;
    }
    map<int,int> m;
    int sum = 0;
    rep(i,n) {
        sum += dp[i+1];
        m[sum]++;
    }
    int q; cin >> q;
    while(q--) {
        cin >> temp;
        cout << m[temp] << '\n';
    }

	return 0;
}