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
		string M, W;
		cin >> M >> W;
		if(M.size() > W.size())
			swap(M,W);
		// Men name should be short
		int m = M.size();
		int n = W.size();

		int count = 0;
		bool flag = false;
		REP(i,0,n-1)
		{
			if(M.at(count) == W.at(i))
			{
				count++;

				if(count == m)
				{
					flag = true;
					break;
				}
			}
		}

		cout << (flag ? "YES\n" : "NO\n");
	}

	return 0;
}