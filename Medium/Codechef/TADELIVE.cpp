#include <bits/stdc++.h>
typedef long long ll;
typedef pair<ll, ll> pll;
using namespace std;

int main()
{
    ll m, x, y;
    cin >> m >> x >> y;
    vector<bool> order(m, 0);
    vector<pll> andey(m), bob(m);
    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        andey[i] = {a, i};
    }
    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        bob[i] = {a, i};
    }
    sort(andey.begin(), andey.end(), greater<ll>());
    sort(bob.begin(), bob.end(), greater<ll>());

    ll ans = 0;
    
    for (ll i = 0; i < m && x && y; i++)
    {
        if (order[i] == 0)
        {
            if (andey[i].first > bob[i].first)
            {
                ans += andey[i].first;
                order[andey[i].second] = 1;
                x--;
            }
            else
            {
                ans += bob[i].first;
                order[bob[i].second] = 1;
                y--;
            }
        }
    }

    return 0;
}