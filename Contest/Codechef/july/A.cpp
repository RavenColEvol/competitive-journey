#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
#define debug(x) cout << #x << " = " << x << '\n'
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
	FIO;
    ll t, n, m, x, y, z, p, e; cin >> t;
    while(t--) {
        cin >> n >> m;

        if(m == 0) {
            cout << "-1\n"; continue;
        }
        
        vector<map<ll, ll>> mp(n);
        vector<pair<pair<ll,ll>, map<ll,ll>>> inp(m);

        rep(i, 0, m) {
            cin >> x >> y >> z;
            --x, --y;
            inp[i].first.first = x;
            inp[i].first.second = y;
            rep(j, 0, z) {
                cin >> p >> e;
                inp[i].second[p] = e;
                if(mp[x].find(p) == mp[x].end())
                    mp[x][p] = e;
                else
                    mp[x][p] = min(mp[x][p], e);

                if(mp[y].find(p) == mp[y].end())
                    mp[y][p] = e;
                else   
                    mp[y][p] = min(mp[y][p], e);
            }
        }

        for(auto i : inp) {
            cout << i.first.first << ' ' << i.first.second << ' ';
            for(auto j : i.second)
                cout << j.first << " " << j.second << ' ';
            cout << '\n';
        }
    }
	return 0;
}
