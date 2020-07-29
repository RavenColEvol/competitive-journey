#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll n; cin >> n;
    ll a, b, c;
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) {
        cin >> a >> b >> c;
        ll v = (a * a + b * b);
        c = c * c;
        mp[(v/c)]++;
    }
    ll ans = 0;
    for(auto i : mp) {
        ans += (i.second * (i.second - 1))/2;
    }
    cout << ans << '\n';
	return 0;
}