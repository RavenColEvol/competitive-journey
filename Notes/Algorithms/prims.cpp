#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

ll minkey(vector<ll> key, vector<bool> visited) {
    ll mi = 0, mv = INT_MAX;

    for(ll i = 0; i < key.size(); i++) {
        if(visited[i] == false && key[i] < mv) {
            mv = key[i], mi = i;
        }
    }
    return mi;
}

void printMST(vector<ll> parent, vector<vector<ll>> graph)  
{  
    cout<<"Edge \tWeight\n";  
    for (int i = 1; i < graph.size(); i++)  
        cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n";  
}  

void primMST(vector<vector<ll>> graph) {
    vector<ll> parent(graph.size()), key(graph.size(), INT_MAX);
    vector<bool> visited(graph.size(), 0);

    parent[0] = -1;
    key[0] = 0;

    for(int i = 0; i < graph.size(); i++) {
        ll u = minkey(key, visited);
        visited[u] = true;

        for(ll v = 0; v < graph.size(); v++) {
            if(graph[u][v] && visited[v] == false && graph[u][v] < key[v]) {
                key[v] = graph[u][v], parent[v] = u;
            }
        }
    }

    printMST(parent, graph);

}

int main()
{
	FIO;
	vector<vector<ll>> graph = { { 0, 2, 0, 6, 0 },  
                        { 2, 0, 3, 8, 5 },  
                        { 0, 3, 0, 0, 7 },  
                        { 6, 8, 0, 0, 9 },  
                        { 0, 5, 7, 9, 0 } };
    primMST(graph);
	return 0;
}