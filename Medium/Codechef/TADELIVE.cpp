#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <ll, ll> pll;

int main()
{
    ll m, x, y, temp, ans = 0;
    cin >> m >> x >> y;
    vector<ll> p(m), q(m);
    vector<pll> orders(m);
    for(ll i = 0; i < m; i++) {
        cin >> p[i];
    }
    for(ll i = 0; i < m; i++) {
        cin >> q[i];
        orders[i] = {abs(p[i] - q[i]), i};
    }

    sort(orders.begin(), orders.end(), greater<pll>());
    
    for(ll i = 0; i < m; i++) {
        ll idx = orders[i].second;
        if(p[idx] >= q[idx] && x) ans += p[idx], x--;
        else ans += q[idx], y--;
    }

    cout << ans << '\n';

    return 0;
}