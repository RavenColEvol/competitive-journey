#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 100000;
int dp[10000] = {0};
void precompute() {
	dp[1] = 1;
	for(int i = 2; i < 10000; i++) {
		dp[i] = ( (dp[i-1] + 1)*2 - 1 ) % MOD;
	}
}

int main()
{
	precompute();
	ll test ; cin >> test;
	while(test--){
		ll n; cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}