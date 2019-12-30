#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{
	fastio
	
	int n, d;
	cin >> n >> d;
	vector<int> vi;
	REP(i,0,n-1)
	{
		int t;
		cin >> t;
		vi.push_back(t);
	}

	sort(vi.begin(), vi.end());

	int answer = 0;
	REP(i, 0, n-2)
	{
		if( (vi[i+1] - vi[i]) <= d)
		{
			answer++;
			i++;
		}
	}
	cout << answer << '\n';
	return 0;
}