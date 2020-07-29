#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int ans = 0;

bool check(vector<string> chess,vector<vector<bool>> board, int r, int c) {
    if(chess[r][c] == '*') return false;

    for(int i = 0; i < c; i++) {
        if(board[r][i] == true) {
            return false;
        }
    }
    ll x = r, y = c;
    while(x >= 0 && y >= 0) {
        if(board[x][y] == true) return false;
        x--, y--;
    }
    y = r, x = c;
    while(x >= 0 && y < 8) {
        if(board[y][x] == true) return false;
        x--, y++;
    }
    return true;
}

void ways(vector<string> chess, vector<vector<bool>> board, int col = 0) {
    if(col == 8) {
        ans++;
        return ;
    }
    for(int i = 0; i < 8; i++) {
        if(check(chess, board, i, col)){
            board[i][col] = true;
            ways(chess, board, col + 1);
            board[i][col] = false;
        }
    }
}

int main()
{
	FIO;
    vector<string> chess(8);
    for(string& s : chess) cin >> s;
    vector<vector<bool>> board(8, vector<bool>(8, 0));
    ways(chess, board);
    cout << ans << '\n';
	return 0;
}