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
    ll t; cin >> t;
    while(t--) {
        ll f = 0, x, y;
        cin >> x >> y;
        for(ll i = x; i <= y; i++) {
            if(y / x > 1) {
                cout << x << ' ' << (y / x) * x << '\n';
                f = 1;
                break;
            }
        }
        if(!f) 
        cout << -1 << ' ' << -1 << '\n';
    }
	return 0;
}