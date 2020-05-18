#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
	int arr[] = {2, 3, 5, 6, 8, 10};
    int sum = 17;
    int n = sizeof arr / sizeof sum;
	int dp[n+1][sum+1];
	for(int i = 0; i < n + 1; i++) dp[i][0] = 1;
	for(int i = 1; i < sum + 1; i++) dp[0][i] = 0;

	for(int i = 1; i < n+1; i++) {
		for(int j = 1; j < sum + 1; j++)
		{
			if(arr[i-1] <= j) {
				dp[i][j] = dp[i-1][j - arr[i-1]] + dp[i-1][j];
			} else dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][sum] << '\n';
	return 0;
}