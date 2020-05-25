#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
using namespace std;
typedef long long ll;

int dp[1000006];

int nw(int n) {
    if(n < 0) return 0;
    if(n == 0) return 1;

    if(dp[n] != -1) return dp[n];

    int ans = 0;
    for(int i = 1; i < 7; i++)
        if(i <= n)
        ans = (ans + nw(n - i)) % mod;
    
    return dp[n] = ans;
}

int main()
{
	FIO;
    memset(dp, -1, sizeof dp);
	int n; cin >> n;
    cout << nw(n) << '\n';
	return 0;
}