#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

string path;
ll ans = 0;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

bool check(vector<vector<bool>> vis, int x = 0, int y = 0) {
    if(x < 0 || y < 0 || x == 7 || y == 7 || vis[x][y]) return false;
    return true;
}

void ways(vector<vector<bool>> vis, int x = 0, int y = 0) {
    if(x == 0 && y == 6) ans++;
    
    if(vis[x][y]) return ;

    vis[x][y] = true;
    for(int i = 0; i < 4; i++) {
        if(check(vis, x + dx[i], y + dy[i])) {   
            ways(vis, x + dx[i], y + dy[i]);
        }
    }
}

int main()
{
	FIO;
    cin >> path;
    vector<vector<bool>> vis(8, vector<bool>(8, 0));
    ways(vis);
    cout << ans << '\n';
	return 0;
}