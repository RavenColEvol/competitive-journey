#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

ll msb(ll n) {
    ll x = log2(n);
    return (1<<x);
}

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll x = msb(n);
        if(n == 1) cout << 2 << '\n';
        else if((x ^ (x-1)) == n) cout << x - 1 << '\n';
        else cout << -1 << '\n';
    }
	return 0;
}