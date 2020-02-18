#include<bits/stdc++.h>
#define flashio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef long long ll;

map< pair<int, int> , float> dp;

void fill_map(vector<int> xaxis, vector<int> yaxis, int n, int m) {
	for(int i = 0; i < n; i++) {
		for(int j =0 ; j < m; j++) {
			if(dp.find({abs(xaxis[i]),abs(yaxis[j])}) == dp.end()) {
				dp[{abs(xaxis[i]),abs(yaxis[j])}] = sqrt(xaxis[i]*xaxis[i] + yaxis[j]*yaxis[j]);
			}
		}
	}
}

int main()
{
	flashio;
	int test ;
	cin >> test; 
	while(test--){
		int n, m;
		cin >> n >> m;
		vector<int> xaxis(n), yaxis(m);
		for(int& i : xaxis) cin >> i;
		for(int& i : yaxis) cin >> i;
		fill_map(xaxis, yaxis, n, m);
		
	}
	return 0;
}