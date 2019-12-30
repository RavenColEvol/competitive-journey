#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

struct Tree {
	int x ;
	int h;
};

int main()
{
	fastio
	
	vector<Tree> arr;

	int t;
	cin >> t;

	while(t--)
	{
		Tree t;
		cin >> t.x >> t.h;
		arr.push_back(t);
	}

	

	return 0;
}