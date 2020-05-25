#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int dp[1000][1000];

int solve(int arr[], int i, int j) {

    if(i >= j) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    int ans = INT_MAX, cost;
    for(int k = i; k <= j-1; k++) {
        cost = solve(arr, i, k) + solve(arr, k + 1, j) + arr[i-1] * arr[k] * arr[j];
        ans = min(ans, cost);
    }

    return dp[i][j] = ans;
}

int main()
{
	FIO;
	int arr[] = {40, 20, 30, 10, 30};
    int n = sizeof arr / sizeof arr[0];
    memset(dp, -1, sizeof dp);
    cout << solve(arr, 1, n-1);
	return 0;
}