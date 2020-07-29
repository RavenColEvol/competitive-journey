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
        ll a, b; cin >> a >> b;
        ll x = (2 * a - b), y = 2 * b - a;
        if(x >= 0 && y >= 0 && x % 3 == 0 && y % 3 == 0) {
            cout << "YES\n";
        } else cout << "NO\n";
    }
	return 0;
}