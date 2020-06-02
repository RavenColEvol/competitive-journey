#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

bool m[101];
int d[101];
vector<vector<int>> g = {
    {1},
    {0,2,3},
    {1},
    {1,4,5},
    {3},
    {3}
};

void sssp(int vtx, int dis) {
    m[vtx] = true;
    d[vtx] = dis;

    for(int i : g[vtx]) {
        if(m[i] == false)
            sssp(i, dis + 1);
    }
}

int main()
{
	FIO;

    sssp(0, 0);
    for(int i = 0; i < 10; ++i) cout << d[i] << ' ';
    cout << '\n';
	return 0;
}