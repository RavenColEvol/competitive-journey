#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll t, n; cin >> t;
    while(t--) {
        cin >> n;
        ll c = 0;
        while(n) {
            c++;
            n >>= 1;
        }
        cout << c << '\n';
    }
	return 0;
}