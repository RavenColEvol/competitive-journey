#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define nl '\n'

using namespace std;

int main()
{
	fastio
	int n;
	cin >> n;
	int arr[n];
	int max = 0;
	REP(i, 0, n-1)
	{
		cin >> arr[i];
		if(arr[i] > max)
			max = arr[i];
	}

	int sum = 0;
	REP(i, 0, n-1)
	{
		sum += max - arr[i];
	}

	cout << sum << nl;
	return 0;
}