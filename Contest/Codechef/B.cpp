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
        ll n; cin >> n;
        ll h = n/2;
        if(h & 1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            for(int i = 1; i <= h; i++) {
                cout << 2*i << ' ';
            }
            ll x = h;
            for(int i = h; i >= 1; i--, x-=2) {
                if(x > 0)
                cout << 2*i - 1 + 2 << " ";
                else 
                cout << 2*i - 1 << ' ';
            }
            cout << '\n';
        }
    }
	return 0;
}