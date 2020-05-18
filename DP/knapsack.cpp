#include<bits/stdc++.h>
using namespace std;

int knapsack(int value[], int weight[], int w, int n, int i) {
    // base case ( smallest  valid case )
    if(w == 0 || i == n) return 0;

    if(weight[n-1] <= w) 
        return max(value[i] + knapsack(value, weight, w - weight[i], n, i + 1), knapsack(value, weight, w, n, i + 1));

    return knapsack(value, weight, w, n, i + 1);
}

int main()
{
    int value[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int w = 50;
    int n = sizeof value / sizeof(int);
    //cout << knapsack(value, weight, w, n, 0) << '\n';
    vector<vector<int>> dp(n+1, vector<int>(w+1, -1));

    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < w + 1; j++) 
        if(i == 0 || j == 0)
            dp[i][j] = 0;
    }

    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < w + 1; j++) {
            if(weight[i] <= j) {
                dp[i][j] = max(value[i] + dp[i][j-weight[i]], dp[i-1][j]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][w] << '\n';
    return 0;
}