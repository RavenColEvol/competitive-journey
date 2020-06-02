#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

vector<tuple<int,int,int>> g = {
    {0, 1, 1},
    {0, 3, 3},
    {0, 2, 3},
    {1, 2, 1},
    {1, 3, 1},
    {2, 3, 2},
};

int dis[4];

void bf() {
    fill(dis, dis + 4, 1000);
    dis[0] = 0;
    int a, b, c;

    for(int i = 0; i <= 3; i++) {
        for(auto e : g) {
            tie(a, b, c) = e;
            dis[b] = min(dis[b], dis[a] + c);
        }
    }
}

int main()
{
	FIO;
	bf();
    for(int i : dis) cout << i << ' ';
    cout << '\n';
	return 0;
}