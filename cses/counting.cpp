#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

vector<vector<bool>> vis(1001, vector<bool>(1001, 0));

vector<int> dx = {-1, 0, 0, 1};
vector<int> dy = {0, -1, 1, 0};

ll n, m; 

bool check(vector<string> arr, int i, int j) {
    if(i < 0 || j < 0 || i == n || j == m || vis[i][j] == true || arr[i][j] == '#') {
        return false;
    }
    return true;
}

void bfs(vector<string> arr, int x, int y) {
    queue<pair<int,int>> Q; Q.push({x, y});
    vis[x][y] = true;
    while(!Q.empty()) {
        pair<int,int> p = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++) {
            if(check(arr, p.first + dx[i], p.second + dy[i])) {
                vis[p.first + dx[i]][p.second + dy[i]] = true;
                Q.push({p.first + dx[i], p.second + dy[i]});
            }
        }
    }
}

int main()
{
	FIO;
    cin >> n >> m;
    vector<string> arr(n);
    for(string& s : arr) cin >> s;
    
    ll c = 0;
    rep(i, 0, n) {
        rep(j, 0, m) {
            if(arr[i][j] == '.' && !vis[i][j]) {
                c++;
                bfs(arr, i, j);
            }
        }
    }
    cout << c << '\n';
	return 0;
}