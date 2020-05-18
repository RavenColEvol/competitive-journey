#include<bits/stdc++.h>
using namespace std;

bool ss(int arr[], int n, int s) {
    
    if(s == 0) return true;
    if(n == 0) return false;

    if(s - arr[n-1] >= 0) 
        return ss(arr, n-1, s - arr[n-1]) || ss(arr, n-1, s);

    return ss(arr, n-1, s - arr[n-1]);
}

int main()
{
    int arr[] = {1, 5, 8, 4};
    int n = sizeof arr / sizeof arr[0];
    int s = accumulate(arr, arr + n, 0);
    if(s % 2 != 0) cout << false << '\n';
    else
    {
        s = s / 2;
        bool dp[n + 1][s + 1];
        for(int i = 0; i < n + 1; i++) dp[i][0] = true;
        for(int i = 1; i < s + 1; i++) dp[0][i] = false;

        for(int i = 1; i < n + 1; i++) {
            for(int j = 1; j < s + 1; j++) {
                if(arr[i-1] <= j) {
                    dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
                } else dp[i][j] = dp[i-1][j];
            }
        }
        cout << dp[n][s] << '\n';
    }
    return 0;
}