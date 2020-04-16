#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

ll product ;
const ll MOD = 1e7 + 9;

ll factors(ll x) {
    ll count = 1, temp = 1;
    while(x % 2 == 0) {
        ++temp;
        x /= 2;
    }
    count *= temp ;
    for(ll i = 3; i*i <= x; i+=2) {
        temp = 1;
        while(x % i == 0) {
            ++temp;
            x /= i;
        }
        count *= temp;
    }
    if(x > 1) count *= 2;
    return count;
}

void dfs(vector<vector<ll>> graph, vector<ll> cost, ll node, ll find, ll val , vector<bool> visited, map<pll, ll> mp) {
    if(mp.find({node, find}) != mp.end()) {
        product = mp[{node, find}];
        return;
    }
    if(node == find) {
        product = val;
        return ;
    }
    for(ll i : graph[node]) {
        if(! visited[i - 1] ){
            visited[i-1] = true;
            mp[{node, i}] = val*cost[i-1];
            dfs(graph, cost, i, find, (val*cost[i-1]) % MOD, visited, mp);
        }
    }

}

int main(){
	optimize
    ll t;
    test(t) {
        ll n; cin >> n;
        vector<vector<ll>> graph(n + 1);
        vector<ll> cost(n);
        
        for(ll i = 0; i < n - 1; i++) {
            ll x, y; cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        for(ll& i : cost) cin >> i;
        ll q; cin >> q;
        map<pll, ll> mp;
        rep(i,q) {
            ll start, end;
            vector<bool> visited(n);
            cin >> start >> end;
            dfs(graph, cost, start, end, cost[start-1], visited, mp);
            cout << factors(product) << '\n';
        }
        
    }
	return 0;
}