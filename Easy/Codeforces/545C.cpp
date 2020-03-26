#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main()
{
	fastio
	int t; cin >> t;
	vector<pair<int,int>> tree(t);

	for(auto& i : tree) cin >> i.first >> i.second;
	if(t == 1 || t == 2) {
		cout << t;
		return 0;
	}
	int count = 2;
	for(int i = 1; i < t-1; i++) {
		if( (tree[i].first - tree[i-1].first) > tree[i].second) {
			++count;
		}
		else if ( tree[i+1].first - tree[i].first > tree[i].second) {
			++count;
			tree[i].first += tree[i].second;
		}
	}
	cout << count ;
	return 0;
}