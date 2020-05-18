#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int gd(int arr[], int diff, int n)
{
    if(diff == 0) return 1;
    if(n == 0) return 0;

    return gd(arr, diff - arr[n-1], n-1) + gd(arr, diff, n-1);
}


int main()
{
	FIO;
    int arr[] = {1, 1, 2, 3};
    int diff = 1;
    int n = sizeof arr / sizeof arr[0];
    int s = accumulate(arr, arr + n, 0);
    diff = (diff + s)/2;
    //cout << gd(arr, diff, n) << '\n';
    int dp[n+1][diff + 1];
    memset(dp, 0, sizeof dp);
    for(int i = 0; i < n + 1; i++) dp[i][0] = 1;
    
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < diff + 1; j++) {
            if(arr[i-1] <= j)
            dp[i][j] = dp[i-1][j - arr[i-1]] + dp[i-1][j];
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][diff] << '\n';
	return 0;
}