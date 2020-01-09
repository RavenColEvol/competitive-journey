#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define size(arr) sizeof(arr)/sizeof(arr[0])
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int main()
{
	fastio
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		int arr[n][m];

		REP(i, 0, n-1)
			REP(j,0,m-1)
				cin >> arr[i][j];

		int answer = n*m;

		for(int i = 1; i < n - 1 ; i++)
		{
			for(int j = 1; j < m - 1; j++)
			{
				for(int k = 1; k <= min({i,j, n-i - 1, m-j-1}) ; k++)
				{
					if( (arr[i + k][j] == arr[i - k][j]) && (arr[i][j+ k] == arr[i][j - k]))
						answer++;
					else 
						break;
				}
			}
		}

		cout << answer << endl;
	}
	return 0;
}