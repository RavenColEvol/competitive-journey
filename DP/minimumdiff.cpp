#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
#define int long long

int32_t main()
{
	FIO;
	int arr[] = {1, 2, 7};
    int n = sizeof arr / sizeof arr[0];
    int s = accumulate(arr, arr + n, 0);
    bool dp[n+1][s+1] = {0};
    
    for(int i = 0; i < n + 1; i++) dp[i][0] = true;
    for(int i = 1; i < s + 1; i++) dp[0][i] = false;

    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < s + 1; j++) {
            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
            else 
                dp[i][j] = dp[i-1][j];
        }
    }
    int ans = INT_MAX;
    for(int i = 1; i <= (s/2); i++) {
        if(dp[n][i])
        ans = min(ans, s - 2 * i);
    }
    cout << ans << '\n';

	return 0;
}