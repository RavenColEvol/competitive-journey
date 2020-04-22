#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define MAX 1e3 + 1
using namespace std;
typedef long long ll;

vector<vector<int>> graph = {{0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2}, {1, 4, 2}, {3, 2, 5}, {3, 1, 1}, {4, 3, -3}};
ll N = 5, E = 8;

void bellmanford() {
    vector<int> dist(N, INT_MAX);
    dist[0] = 0;

    for(int i = 0; i < N - 1; i++) {
        for(int j = 0; j < E; j++) {
            if(dist[graph[j][0]] + graph[j][2] < dist[graph[j][1]]) 
                dist[graph[j][1]] = dist[graph[j][0]] + graph[j][2];
        }
    }

    for(int i = 0; i < N; i++) cout << i << ' ' << dist[i] << '\n';
}

int main()
{
    FIO;
    bellmanford();
    return 0;
}