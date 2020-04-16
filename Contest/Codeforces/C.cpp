#include<bits/stdc++.h>
#define test(t) for(cin>>t;t;--t)
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,k,n) for(ll i=k;i<n;i++)
#define repr_r(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin>>
#define out cout<<
#define endl '\n'
#define optimize ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll>pll;

ll cities, industry;
vll levels(100005);
vector<bool> visited(100005);

void bfs(vector<vll> graph) {
    deque<ll> dq;

    dq.push_back(1);
    levels[1] = 0;
    visited[0] = visited[1] = true;
    while(!dq.empty()) {
        ll top = dq.front();
        dq.pop_front();
        
        for(ll city : graph[top]) {
            if(!visited[city]) {
                dq.push_back(city);
                visited[city] = true;
                levels[city] = levels[top] + 1;
            }
        }
    }
}

int main(){
	optimize  
    cin >> cities >> industry;
    vector<vll> graph(cities + 1);
    rep(i, cities - 1) {
        ll x, y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bfs(graph);
    ll total = accumulate(levels.begin(), levels.begin() + cities, 0);
    cout << total - industry << '\n';

	return 0;
}