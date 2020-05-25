#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const int mex = 1e6 + 6, mod = 1e9 + 7;
int dp[mex], coins[100];

int main()
{
	FIO;
	int n, v; cin >> n >> v;
    for(int i = 0; i < n; i++) cin >> coins[i];

    dp[0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = coins[i]; j <= v; ++j)
            dp[j] = (dp[j] + dp[j - coins[i]]) % mod;
    }
    
    cout << dp[v] << '\n';
	return 0;
}