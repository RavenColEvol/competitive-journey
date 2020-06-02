#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int dis[101];
bool vis[101];

vector<vector<int>> g = {
    {1, 2},
    {0, 3},
    {0},
    {1}
};

void bfs(int v) {
    queue<int> Q;
    Q.push(v);
    vis[v] = true;
    dis[v] = 0;

    while(!Q.empty()) {
        int t = Q.front();
        Q.pop();

        for(int i : g[t]) {
            if(vis[i] == false) 
                Q.push(i), vis[i] = true, dis[i] = dis[t] + 1;
        }
    }
}

int main()
{
	FIO;
	bfs(0);
    for(int i = 0; i < 5; ++i) cout << dis[i] << ' ';
    cout << '\n';
	return 0;
}