#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

vll dis(10001), primes, g[10001];
vector<bool> vis(10001);

bool isPrime(ll n) {
    if(n <= 3) return n > 1;

    if(n % 2 == 0 || n % 3 == 0) return false;
    
    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

bool isValid(ll a, ll b) {
    ll c = 0;

    while(a and b) {
        if(a % 10 != b % 10) c++;
        if(c > 1) return false;
        a /= 10, b  /= 10;
    }

    return true;
}

void buildGraph() {
    rep(i, 1000, 10000) {
        if(isPrime(i))
            primes.push_back(i);
    }

    rep(i, 0, primes.size()) {
        rep(j, i+1, primes.size()) {
            ll a = primes[i];
            ll b = primes[j];

            if(isValid(a, b))
                g[a].push_back(b), g[b].push_back(a);
        }
    }
}

void bfs(ll v) {
    queue<ll> Q;
    Q.push(v);

    vis[v] = true;
    dis[v] = 0;

    while(!Q.empty()) {
        ll top = Q.front();
        Q.pop();

        for(ll i : g[top]) {
            if(vis[i] == false) {
                vis[i] = true;
                dis[i] = dis[top] + 1;
                Q.push(i);
            }
        }
    }
}

int main()
{
	FIO;
	ll t, a, b;
    buildGraph();
    cin >> t;
    while(t--) {
        cin >> a >> b;
        fill(dis.begin(), dis.end(), -1);
        fill(vis.begin(), vis.end(), false);
        bfs(a);

        if(dis[b] == -1) cout << "Impossible\n";
        else cout << dis[b] << '\n';
    }
	return 0;
}