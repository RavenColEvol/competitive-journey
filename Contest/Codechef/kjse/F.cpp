#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

bool vis[105] = {0};

ll dfs(ll n, vector<vll> g) {
    vis[n] = true;
    int dep = 0;

    for(ll i : g[n]) {
        if(!vis[i]) dep += dfs(i, g) + 1;
    }

    return dep;
}

int main()
{
	FIO;
    ll t;
    cin >> t;
    while(t--) {
        ll n, q; cin >> n >> q;
        vector<ll> arr(n, 0);
        vector<vll> g(102);
        
        while(q--) {
            string p1, p2; cin >> p1 >> p2;
            ll a = p1[1] - '1', b = p2[1] - '1';
            arr[b]++;
            g[a].push_back(b);
        }

        vector<ll> ans;
        rep(k, 0, n) {
            ll mv = INT_MIN, mi = -1;
            for(ll i = 0; i < n; i++) {
                if(arr[i] == 0) {
                    memset(vis, false, sizeof(vis));
                    ll d = dfs(i, g);
                    if(mv < d) {
                        mv = d;
                        mi = i;
                    }
                }
            }
            if(mi == -1) break;
            ans.push_back(mi + 1);
            arr[mi] = -1;
            for(ll j : g[mi]) arr[j]--;
        }
        if(ans.size() != n) {
            cout << "NO\n";
        }else {
            cout << "YES\n";
            reverse(ans.begin(), ans.end());
            for(ll i : ans) {
                cout << 'k' << i << '\n';
            }
        }
    }
	return 0;
}