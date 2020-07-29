#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

const ll mod = 1e9 + 7;

vector<map<ll,ll>> g(40);

ll t, n, m, x, y, z, p, e, ans;
bool possible;

int main()
{
	FIO;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		// no restrictions
		if(m == 0) {
			cout << "-1\n";
			continue;
		}

		vector<unordered_map<ll, ll>> ar(38);
		ans = 1LL, possible = 1;
		rep(i, 0, m) {
			cin >> x >> y >> z;
			x--, y--;
			rep(j, 0, z) {
				cin >> p >> e;

				if(ar[x].find(p) == ar[x].end()) {
					ar[x][p] = e;
				} else {
					if(ar[x][p] < e) {
						possible = false;
					} else {
						ar[x][p] = e;
					}
				}

				if(ar[y].find(p) == ar[y].end()) {
					ar[y][p] = e;
				} else {
					if(ar[y][p] < e) {
						possible = false;
					} else {
						ar[y][p] = e;
					}
				}

			}
		}

		for(auto i : ar) {
			for(auto j : i) {
				ans *= j.second;
			}
		}

		if(possible) cout << ans << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}
