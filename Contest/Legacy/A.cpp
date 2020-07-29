#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> arr(n);
        for(ll& i : arr) cin >> i;
        ll q;  cin >> q;
        for(ll i = 0; i < q; i++) {
            ll x, y; cin >> x >> y;
            ll v = *lower_bound(arr.begin(), arr.end(), x);
            if(v - x == y) cout << -1 << '\n';
            else  {
                if(y == 0) cout << lower_bound(arr.begin(), arr.end(), x) - arr.begin() << '\n';
                else if(v - x < y) cout << lower_bound(arr.begin(), arr.end(), x) - arr.begin() << '\n';
                else cout << lower_bound(arr.begin(), arr.end(), x) - arr.begin() + 1 << '\n';
            }
        }
    }
	return 0;
}
