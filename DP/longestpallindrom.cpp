#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

int lcs(string a, string b, int n, int m) {
    if(n == 0 || m == 0) return 0;

    if(a[n-1] == b[m-1]) return 1 + lcs(a, b, n-1, m-1);

    return max(lcs(a, b, n-1, m), lcs(a, b, n, m-1));
}

int main()
{
	FIO;
    string a = "abcdefba";
    string b = a;
    reverse(b.begin(), b.end());
    int n = a.size();
    
    int dp[n+1][n+1] = {0};

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(a[i-1] == b[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
        }
    }
    int i = n, j = n;
    string f = "";
    while(i && j) {
        if(a[i-1] == b[j-1]) f += a[i-1], i--, j--;
        else if(a[i-1] > b[j-1]) i--;
        else j--;
    }
    reverse(f.begin(), f.end());
    cout << f << '\n';
    cout << n - f.size() << '\n';
	return 0;
}