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
		int n, c, q;
		cin >> n >> c >> q;
		while(q--)
		{
			int l, r;
			cin >> l >> r;
			if(c >= l && c <= r)
				c = r - (c - l);
		}
		cout << c << '\n';
	}

	return 0;
}