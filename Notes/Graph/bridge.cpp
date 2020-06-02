#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;


vector<ll> ar[101];
int in[101], low[101], vis[101], timer;

void dfs(ll node, ll par) {
    vis[node] = 1;
    in[node] = low[node] = timer++;

    for(ll child : ar[node]) {
        if(child == par) continue;

        if(vis[child] == 1) {
            low[node] = min(low[node], in[child]);
        }
        else {
            dfs(child, node);
            if(low[child] > in[node]) cout << "Bridge between " << node << " & " << child << '\n';
            low[node] = min(low[node], low[child]);
        }
    }
}

int main()
{
	FIO;
    ll n, m, x, y;
    cin >> n >> m;

    while(m--) {
        cin >> x >> y;
        ar[x].push_back(y);
        ar[y].push_back(x);
    }

    dfs(1,-1);
	return 0;
}