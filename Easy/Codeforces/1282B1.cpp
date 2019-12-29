#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;


using namespace std;

int main()
{
	fastio
	int t; 
	cin >> t;

	while(t--)
	{
		int n, c, k;
		cin >> n >> c >> k;
		int arr[n];
		REP(i, 0, n-1)
			cin >> arr[i];

		sort(arr, arr + n, greater<int>());
		int count = 0;

		REP(i, 0, n-1){
			
		}

		cout << count << endl;
	}
	return 0;
}