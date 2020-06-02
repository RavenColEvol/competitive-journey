#include<bits/stdc++.h>
using namespace std;

bool c[3];
int cc = 0;
vector<vector<bool>> g = {
    {0, 1, 0},
    {1, 0, 0},
    {0, 0, 0}
};

void dfs(int v) {
    c[v] = true;

    for(int i = 0; i < g[v].size(); i++) {
        if(g[v][i] && c[i] == false)
            dfs(i);
    }
}

int main()
{
    for(int i = 0; i < g[0].size(); i++) {
        if(c[i] == false) {
            cc++;
            dfs(i);
        }
    }
    cout << cc << '\n';
    return 0;
}