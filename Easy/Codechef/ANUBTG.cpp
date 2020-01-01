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
		int n;
		cin >> n;
		vector<int> vi(n);
		for(int& i:vi)
			cin >> i;

		sort(vi.begin(), vi.end(), greater<int>());
		int cost = 0;
		for(int i = 0; i < n; i+=4){
			if(i+1<n) cost += vi[i+1];
			cost += vi[i];
		}

		cout << cost << '\n';
	}
	return 0;
}