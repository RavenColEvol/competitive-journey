#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const int mex = 205;
int t, m, n;
bool visited[mex][mex];
char arr[mex][mex];

int solve(int x = 0, int y = 0) {
    visited[x][y] = true;
    int ans = 0;
    for(int i : {-1 , 1}) {
        // go in x
        if( x + i >= 0 && x + i < n && !visited[x+i][y]) {
            if(arr[x + i][y] != '#')
                ans = max(ans, solve(x + i, y) + (arr[x + i][y] == 'T') );
        }
        // go in y
        if( y + i >= 0 && y + i < m && !visited[x][y + i]) {
            if(arr[x][y + i] != '#')
                ans = max(ans, solve(x , y + i) + (arr[x][y + i] == 'T') );
        }
    }
    return ans;
}

int main()
{
	FIO;
	cin >> t;
    while(t--) {
        cin >> m >> n;
        for(int i = 0; i < m; i ++) {
            for(int j = 0; j < n; j++) cin >> arr[i][j], visited[i][j] = false;
        }
        cout << solve() + (arr[0][0] == 'T') << '\n';
    }
	//cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
	return 0;
}