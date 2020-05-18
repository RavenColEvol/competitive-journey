#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const int mex = 1e4 + 5;
typedef pair<int, int> pii;
bool marked[mex];
vector<pii> adj[mex];

int prim(int x) {
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    int y;
    int minimumCost = 0;
    pii p;
    Q.push(make_pair(0, x));

    while(!Q.empty()) {
        p = Q.top();
        Q.pop();
        x = p.second;
        if(marked[x] == true) continue;
        minimumCost += p.first;
        marked[x] = true;
        for(int i = 0; i < adj[x].size(); ++i) {
            y = adj[x][i].second;
            if(marked[y] == false)
                Q.push(adj[x][i]);
        }
    }
    
    return minimumCost;
}

int main()
{
	FIO;
	int nodes, edges, x, y;
    int weight, minimumCost;
    cin >> nodes >> edges;

    for(int i = 0; i < edges; ++i)
    {
        cin >> x >> y >> weight;
        adj[x].push_back(make_pair(weight, y));
        adj[y].push_back(make_pair(weight, x));
    }
	return 0;
}