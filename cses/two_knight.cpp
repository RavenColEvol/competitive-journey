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
    for(ll k = 1; k <= n; k++) {
        ll a1 = k * k, a2 = (a1 * (a1-1)) / 2;
        if(k > 2) {
            a2 -= 4 * (k-1) * (k-2);
        }
        cout << a2 << '\n';
    }
	return 0;
}