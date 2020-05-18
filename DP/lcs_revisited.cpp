#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int main()
{
	FIO;
    string a = "aggtab", b = "gxtxayb";
    int n = a.size(), m = b.size();

    int dp[n+1][m+1];
    memset(dp, 0, sizeof dp);

    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < m + 1; j++) {
            if(a[i-1] == b[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    int i = n, j = m, k;
    string op = "";
    while(i && j) {
        if(a[i-1] == b[j-1]) op += a[i-1], i--, j--;
        else {
            if(dp[i-1][j] > dp[i][j-1]) i--;
            else j--;
        }
    }

    reverse(op.begin(), op.end());
    cout << op << '\n';

    string ss = "";
    i = 0, j = 0, k = 0;
    int c = n + m - op.size();
    
    while(i < n && j < m) {
        if(op[k] != a[i]) ss += a[i], i++;
        if(op[k] != b[j]) ss += b[j], j++;
        if(a[i] == b[j] && op[k] == a[i]) ss += a[i], i++, j++, k++;
    }
    while(i < n) ss += a[i++];
    while(j < m) ss += b[j++];
    cout << ss << '\n';
	return 0;
}