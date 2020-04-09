#include<bits/stdc++.h>
using namespace std;

vector<bool> visited(10,0);
vector<bool> mark(10,0);

void bfs(vector<vector<int>> arr, int node = 1) {
    queue<int> q;
    mark[node] = true;
    q.push(node);
    cout << node << endl;
    while(!q.empty()) {
        int top = q.front(); q.pop();
        for(auto i : arr[top]) {
            if(mark[i]) continue;
            cout << i << endl;
            mark[i] = true;
            q.push(i);
        }
    }
}

void dfs(vector<vector<int>> arr, int node = 1) {
    if(visited[node]) return;
    cout << node << '\n';
    visited[node] = 1;
    for(auto i : arr[node]) {
        dfs(arr, i);
    }
}

int main()
{
    vector<vector<int>> arr(10);
    arr[1].push_back(2);
    arr[1].push_back(3);
    arr[2].push_back(4);
    arr[3].push_back(5);

    cout << "bfs" << endl;
    bfs(arr);
    cout << "dfs" << endl;
    dfs(arr);
    return 0;
}