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
    ll t, a, b, x ; 
    cin >> t;
    vector<int> m;
    while(t--) {
        cin >> a >> b;
        x = a;
        vector<int> arr(b), dp(b + 1, 0), cp(a + 1, 0);
        while(a--) {
            for(int& i : arr) cin >> i;
            dp[0] = 0;
            dp[1] = arr[0];
            for(int i = 2; i <= b; i++) {
                dp[i] = max(dp[i-1], dp[i-2] + arr[i-1]);
            }
            m.push_back(dp[b]);
        }
        if(x == 1) cout << 0 << '\n';
        else if(x == 2) cout << min(m[0], m[1]) << '\n';
        else if(x == 3) {
            cout << min({m[0] + m[2], m[1]}) << '\n';
        } else {
            cout << min({m[0] + m[2], m[1] + m[3], *min_element(m.begin(), m.end())}) << '\n';
        }
    }
	return 0;
}