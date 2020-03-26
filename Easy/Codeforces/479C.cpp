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
	vector<pair<int,int>> a(t);
	for(auto& i : a) cin >> i.first >> i.second;
	sort(a.begin(), a.end());
	int best = -1;
	for(auto i : a) {
		if(best <= i.second) {
			best = i.second;
		}
		else best = i.first;
	}
	cout << best << endl;
	return 0;
}