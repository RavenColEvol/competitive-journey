#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

vector<vll> g = {
    {1, 2},
    {0,3},
    {0},
    {1}
};

vll dis(101);
vector<bool> vis(101);

int dfs(int v) {
    vis[v] = true;
    ll c = 1;

    for(ll i : g[v]) {
        if(vis[i] == false) {
            c += dfs(i);
        }
    }

    return dis[v] = c;
}

int main()
{
	FIO;
    dfs(0);
    rep(i, 0, 4) cout << dis[i] << ' ';
    cout << '\n';
	return 0;
}