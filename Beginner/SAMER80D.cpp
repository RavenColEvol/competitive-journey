#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long ll;
using namespace std;


ll v, x;
string s, c;
const int N = 1e3 + 5;

int main()
{
	FIO;
	
	while(1) {
		cin >> v;
		if(v == 0) return 0;
		cin >> s >> c;
		ll dp[N][N] = {0};

		for(int i = 0; i <= s.size(); i++) {
			for(int j = 0; j <= c.size(); j++) {

				if(i == 0 || j == 0) continue;

				x = 1;

				while(i-x >= 0 && j-x >= 0 && s[i-x] == c[j-x] ) {
					if(x >= v) {
						dp[i][j] = max(dp[i][j], x + dp[i-x][j-x]);
					}
					x++;
				}

				dp[i][j] = max(dp[i][j], dp[i-1][j]);
				dp[i][j] = max(dp[i][j], dp[i][j-1]);

			}
		}

		cout << dp[s.size()][c.size()] << '\n';

	}
	
	return 0;
}