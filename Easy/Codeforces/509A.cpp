#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{
	fastio
	int n;
	cin >> n;
	int arr[n][n] = {0};
	REP(i, 0, n-1)
		arr[0][i] = arr[i][0] = 1;

	REP(i, 1, n-1)
		REP(j, 1, n-1)
			arr[i][j] = arr[i-1][j] + arr[i][j-1];


	cout << arr[n-1][n-1] << endl;
	return 0;
}