#include<bits/stdc++.h>
using namespace std;


int main()
{
    string a = "abc", b ="baba";
    int n = a.size() , m = b.size();
    int dp[n+1][m+1];
    memset(dp, 0, sizeof dp);
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < m + 1; j++)
        {
            if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = 0;
        }
    }
    
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < m + 1; j++) cout << dp[i][j] << ' ';
        cout << '\n';
    }
    
    int i = n, j = m;
    string ans = "";
    while(i and j) {
        if(a[i-1] == b[j-1]) ans += a[i-1], --i, --j;
        else if(a[i-1] > b[i-1]) --i;
        else --j;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
    return 0;
}