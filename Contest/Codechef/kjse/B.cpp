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

vector<ll> ans, sum;
vector<bool> m(10000005, 0);

void precompute() {
    ans.push_back(1);
    sum.push_back(1);
    m[0] = 0;
    for(ll i = 2; ans.size() <= 700; i++) {
        ll diff = i - ans.back();
        if(m[diff] == 0) {
            bool v = true;
            for(ll j : ans) {
                if(m[i - j]) {
                    v = false;
                    break;
                }
            }
            if(v) {
                for(ll j : ans) {
                    m[i - j] = 1;
                }
                ans.push_back(i);
                sum.push_back(i + sum.back());
            }
        }
    }
}

int main(){
	optimize
    precompute();
    //cout << ans.size() << '\n';
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        for(ll i = 0; i < n; i++) cout << ans[i] << ' ';
        cout << '\n';
        cout << sum[n-1] << '\n';
    }
	return 0;
}