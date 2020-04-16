#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> adj[600000];
vector<int> st, ss;

int get(ll prod)
{
	int cnt = 0;
	for (int i = 1; i * i <= prod; i++)
	{
		if (prod % i == 0)
		{
			if (prod / i != i)
			{
				cnt += 2;
			}
			else
			{
				cnt++;
			}
		}
	}

	return cnt;
}
void print(vector<int> ss)
{
	st.clear();
	for (auto x : ss)
	{
		st.push_back(x);
	}
}
void dfs(int u, int to, int par)
{
	// vis[u]=1;
	//cout<<u<<" ";
	ss.push_back(u);
	if (u == to)
	{
		print(ss);
		return;
	}
	int fl = 0;
	for (auto v : adj[u])
	{
		if (v == par)
		{
			// st.pop_back();
			continue;
		}
		else
		{
			dfs(v, to, u);
			fl = 1;
		}
	}
	ss.pop_back();
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		st.clear();
		for (int i = 0; i < 400000; i++)
		{
			adj[i].clear();
		}
		int n;
		cin >> n;
		st.clear();
		ll mod = 1000000007;
		for (int i = 0; i < n - 1; i++)
		{
			int x, y;
			cin >> x >> y;
			x--;
			y--;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		vector<int> costs;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			costs.push_back(x);
		}
		map<pair<int, int>, vector<int>> res;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				dfs(i, j, -1);
				res[{i, j}] = st;
				st.clear();
				ss.clear();
			}
		}

		int q;
		cin >> q;
		while (q--)
		{
			int u, to;
			cin >> u >> to;
			u--;
			to--;
			st.clear();
			vector<int> sp;
			sp = res[{u, to}];
			// dfs(u,to,-1);
			ll prod = 1;
			ll tot = 0;
			ss.clear();
			int sz = sp.size();
			// cout<<sz<<" ";
			map<int, int> mp;

			//cout<<endl;
			for (int i = 0; i < sz; i++)
			{
				int u = costs[sp[i]];
				for (int j = 2; j * j <= u; j++)
				{
					while (u % j == 0)
					{
						mp[j]++;
						u /= j;
					}
				}
				if (u > 1)
				{
					mp[u]++;
				}
			}

			for (auto it : mp)
			{
				prod *= (it.second + 1);
				prod %= mod;
			}

			cout << prod << "\n";
		}
	}
}