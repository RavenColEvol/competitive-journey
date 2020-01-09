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
		int N;
		cin >> N;

		ll A, B, C, D, E, status;

		cin >> A;
		long long ub = 1LL;
		REP(i,0,N-1)
			ub *= 10;

		cout << (ub*2) + A << endl;

		cin >> B;

		cout << abs(ub - B) << endl;

		cin >> C;

		cout << abs(ub - C) << endl;

		cin >> status;

		if(status == -1)
			exit(0);
	}
	return 0;
}