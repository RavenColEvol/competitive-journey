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
    ll t;
    test(t) {
        ll n, cv = 1; cin >> n;
        rep(i, n) {
            if((i&1) == 0) {
                repr(j, cv, (cv+n)) cout << j << ' ';
            } else {
                for(ll j = cv + n - 1; j >= cv; j--)
                    cout << j << ' ';
            }
            cout << '\n';
            cv+=n;
        }
    }
	return 0;
}