#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll x, y, a; cin >> x >> y;
        vector<ll> c(y+1);
        for(ll i = 0; i < x; i++)
            cin >> a, c[a % (y + 1)]++;
        bool possible = false;
        for(ll i : c)
            if(i >= x-1) possible = true;
        if(possible) cout << "YES\n";
        else cout << "NO\n";
    }
	return 0;
}