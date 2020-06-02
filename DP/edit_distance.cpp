#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rep(i, a, b) for(ll i = a; i < b; ++i)
#define input(arr) for(auto& i : arr) cin >> i;
#define output(arr) for(auto i : arr) cout << i << ' ';
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

string a, b;
int dp[5001][5001];

int solve(int n, int m) {
    if(n == 0) return m;
    if(m == 0) return n;

    if(dp[n][m] != -1) return dp[n][m];

    if(a[n-1] == b[m-1]) return solve(n-1, m-1);

    return dp[n][m] = 1 + min({solve(n-1, m), solve(n, m-1), solve(n-1, m-1)});
}

int main()
{
	FIO;
    cin >> a >> b;
    rep(i, 0, a.size() + 1)
        rep(j, 0, b.size() + 1) dp[i][j] = -1;
    cout << solve(a.size(), b.size()) << '\n';
	return 0;
}