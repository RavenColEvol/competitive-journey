#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

const int mex = 1e6 + 3;
int dp[mex];

int rd(int n) {
    if(n == 0) return 0;

    if(dp[n] != -1) return dp[n];

    int temp = n, ans = INT_MAX;
    while(temp) {
        int r = temp % 10;
        if(r > 0) {
            if(dp[n - r] != -1)
                ans = min(ans, 1 + dp[n-r]);
            else ans = min(ans, 1 + rd(n-r));
        }
        temp /= 10;
    }
    return dp[n] = ans;
}

int main()
{
	FIO;
	int n; cin >> n;
    fill(dp, dp + mex, -1);
    cout << rd(n) ;
	return 0;
}