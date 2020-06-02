#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
#define repr(i, a, b) for(ll i = a; i >= b; --i)
using namespace std;
typedef long long ll;
using vll =  vector<ll>;

const int mex = 1e3 + 1;
ll n;
vector<vll> dp(mex, vll(mex, 0));
vector<vector<char>> g(mex, vector<char>(mex, 0));

const int M = 1000000007;

int main()
{
	FIO;
    cin >> n;
    rep(i, 0, n)
        rep(j, 0, n)
            cin >> g[i][j];
    
    dp[0][0] = g[0][0] == '.';

    rep(i, 0, n) {
        rep(j, 0, n) {
            if(g[i][j] == '*') continue;
            if(i > 0) (dp[i][j] += dp[i-1][j]) %= M;
            if(j > 0) (dp[i][j] += dp[i][j-1]) %= M;
        }
    }

    cout << dp[n-1][n-1] << '\n';
	return 0;
}