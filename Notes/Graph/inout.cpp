#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

bool m[101];
int timer = 1;
int in[101], out[101];
vector<vector<int>> g = {
    {1},
    {0,2,3},
    {1},
    {1,4,5},
    {3},
    {3}
};

void dfs(int v) {
    in[v] = timer++;
    m[v] = true;
    for(int i : g[v]) {
        if(m[i] == false)
            dfs(i);
    }
    out[v] = timer++;
}

int main()
{
	FIO;
	dfs(0);
    for(int i = 0; i < 6; ++i) {
        cout << "[" << in[i] << ',' << out[i] << "]\n";
    }
	return 0;
}