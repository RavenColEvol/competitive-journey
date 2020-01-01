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
		int n, answer = 0;
		cin >> n;
		REP(i, 0, n-1)
		{
			int val;
			cin >> val;
			answer = max(answer, val + i);
		}

		cout << answer << '\n';
	}

	return 0;
}