#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define test(t) while(t--)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int main()
{
	fastio
	
	ll t;
	cin >> t;
	
	test(t)
	{
		int n;
		cin >> n;

		if(n == 1)
		{
			int a, b;
			cin >> a >> b;
			if(a == b)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else{
			vector<int> vi;

			REP(i, 1, 2*n)
			{
				int temp;
				cin >> temp;
				vi.emplace_back(temp);
			}

			sort(vi.begin(), vi.end());

			int j = vi.size();
			for(auto i = 0 ; i < j; i++)
			{
				if(vi)
			}

			cout << ms.size() << endl;
		}

	}

	return 0;
}