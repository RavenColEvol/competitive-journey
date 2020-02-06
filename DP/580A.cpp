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
	int n;
	cin >> n;
	vector<int> vi(n);
	for(int& i : vi)
		cin >> i;

	int answer = 0, count = 1;
	REP(i,1,n-1)
	{
		if(vi[i-1] <= vi[i])
			count++;
		else
			count = 1;

		answer = max(answer, count);
	}

	cout << answer << endl;
	return 0;
}