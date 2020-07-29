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
    ll ans = 0;
    ll c = 5LL;
    while(c <= n) {
        ans += n / c;
        c *= 5;
    }
    cout << ans << '\n';
	return 0;
}