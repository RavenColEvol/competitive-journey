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
        ll n, b, m; cin >> n >> b >> m;
        ll cb, c = 1, x;
        cin >> x;
        cb = x/b;
        for(ll i = 0; i < m-1; i++) {
            cin >> x;
            if(cb != x/b) {
                cb = x/b;
                c++;
            } 
        }
        cout << c << '\n';
    }
	return 0;
}