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

ll n, m, ans = 0, cats[100005];
bool visited[100005] = {0};
vector<int> graph[100005];

void dfs(ll index, ll cats_count) {
	bool reached_end = true ;
	visited[index] = true;
	if(cats_count > m) return;

	for(int i = 0; i < graph[index].size(); i++) {
		if(!visited[graph[index][i]]) {
			if(cats[graph[index][i]] == 0)
				dfs(graph[index][i], 0);
			else dfs(graph[index][i], cats_count + 1);

			reached_end = false;
		}
	}

	ans += reached_end;
}

int main(){
	optimize
	cin >> n >> m;
	rep(i,n) cin >> cats[i];
	rep(i,n-1) {
		int x,y ;
		cin >> x >> y;
		x--,y--;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	dfs(0, cats[0]);

	cout << ans << '\n';

	return 0;
}