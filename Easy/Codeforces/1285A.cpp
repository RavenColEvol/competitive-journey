#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int main()
{
	fastio
	int n;
	cin >> n;
	string s;
	cin >> s;
	int l = 0, r = 0;
	for(char c : s)
	{
		c == 'L' ? l++ : r++;
	}
	cout << ( l + r + 1) << endl;
	return 0;
}