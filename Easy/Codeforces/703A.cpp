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
	int points[2] = {0};
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		if(a > b)
			points[0]++;
		else if(b > a)
			points[1]++;
	}

	if(points[0]>points[1])
		cout << "Mishka\n";
	else if(points[1]>points[0])
		cout << "Chris\n";
	else
		cout << "Friendship is magic!^^";
	return 0;
}