#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

bool m[101];
vector<vector<int>> g = {
    {1,2},
    {0, 2},
    {0, 1}
};

bool dfs(int v, int p) {
    m[v] = true;
    
    for(int i : g[v]) {
        if(m[i] == false) {
            if(dfs(i, v) == true) return true;

        } else {
            if(p != i) return true;
        }
    }
    return false;
}

int main()
{
	FIO;
    cout << dfs(0, 0) << '\n';
	return 0;
}