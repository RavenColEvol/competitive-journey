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
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll& i : arr) cin >> i;
    ll mn = *min_element(arr.begin(), arr.end());
    ll mx = *max_element(arr.begin(), arr.end());
    ll v = -1;
    if(mn == mx || n == 1) cout << 0 << '\n';
    else {
        for(ll i = mn; i <= mx; i++) {
            ll to_make = mx - i;
            for(ll j = 0; j < n; j++) {
                if(arr[j] - i != to_make && arr[j] + i != to_make && arr[j] != to_make) {
                    break;
                }
                if(j == n-1) {
                    v = i;
                }
            }
            if(v != -1) {
                break;
            }
        }
    }
    cout << v << '\n';
	return 0;
}