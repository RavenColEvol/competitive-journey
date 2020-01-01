#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{
	fastio
	
	int n, m;
	cin >> n >> m;

	while(m--)
	{
		long long int q;
		cin >> q;
		if(q < n + 2 || q > 3*n)
			cout << 0 << '\n';
		else if( q <= 2*n + 1)
			cout << q - n - 1 << '\n';
		else
			cout << 3*n - q + 1 << '\n';
	}

	return 0;
}