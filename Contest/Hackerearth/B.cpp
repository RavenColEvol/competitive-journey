#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<bool>> arr, int x = 0, int y = 0) {
	if()
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<bool>> arr(n, vector<bool>(m)), ans(n, vector<bool>(m, 0));
	char x;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> x;
			arr[i][j] = x == '#' ? 0 : 1;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			arr[i][j] = !arr[i][j];
			ans[i][j] = dfs(arr);
			arr[i][j] = !arr[i][j];
		}
	}
	return 0;
}