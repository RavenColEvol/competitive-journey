#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

bool m[101];
bool k[101];
vector<vector<int>> g = {
    {1, 5},
    {0, 2},
    {1, 3},
    {2, 4},
    {3, 5},
    {0, 4}
};

bool dfs(int v, int c) {
    m[v] = true;
    k[v] = c;
    for(int i : g[v]) {
        if(m[i] == false) {
            if(dfs(i, !c) == false) return false;
        } else {
            if(k[i] == c) return false;
        }
    }
    return true;
}

int main()
{
	FIO;
	cout << dfs(0, 0) << '\n';
	return 0;
}