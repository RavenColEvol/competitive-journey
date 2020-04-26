#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	ll t; cin >> t;
    while(t--) {
        ll n, s; cin >> n >> s;
        vector<ll> cost(n);
        ll d = INT_MAX, f = INT_MAX;
        for(ll& i : cost) cin >> i;
        for(ll i = 0; i < n; i++) {
            bool temp; cin >> temp;
            if(temp == 0) d = min(d, cost[i]);
            else f = min(f, cost[i]);
        }
        ll x = d + f + s;
        if(x <= 100) {
            cout << "yes\n";
        }
        else cout << "no\n";
    }
	return 0;
}