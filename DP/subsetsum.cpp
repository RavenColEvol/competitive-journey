#include<bits/stdc++.h>
using namespace std;

int ss(int arr[], int sum , int n) {
    if(sum == 0) return true;
    if(n==0) return false;

    if(arr[n-1] <= sum) {
        return ss(arr, sum - arr[n-1], n-1) || ss(arr, sum, n-1);
    }
    return ss(arr, sum, n-1);
}

int main()
{
    int arr[] = {2, 3, 7, 8, 10};
    int sum = 11;
    int n = sizeof arr / sizeof sum;
    bool dp[1000][1000]; // n , sum
    for(int i = 0; i < n + 1; i++) dp[i][0] = true;
    for(int i = 1; i < sum + 1; i++) dp[0][i] = false;

    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < sum + 1; j++) {
            if(arr[i-1] <= j) 
                dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][sum] << '\n';
    return 0;
}