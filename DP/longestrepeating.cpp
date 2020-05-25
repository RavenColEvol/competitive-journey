#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
    string f = "babb", s;
    s = f;
    int n = f.size();

    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[i-1] == f[j-1] && i != j) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    cout << dp[n][n] << '\n';
	return 0;
}