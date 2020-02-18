#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int solve(int n, int m) {
	if(m==0) return 1;
	int numerator = n + m;
	int denominator = min(n, m);
	for(int i = denominator - 1, j = numerator-1; i >= 1; i--,j--) {
		numerator = (numerator * j) % MOD, denominator = (denominator * i)%MOD;
	}

	return numerator / denominator;
}

int main()
{
	int t; scanf("%d", &t);
	while(t--) {

		int n, m;
		scanf("%d%d",&n,&m);
		cout << solve(n,m-1) << endl;
	}
	return 0;
}