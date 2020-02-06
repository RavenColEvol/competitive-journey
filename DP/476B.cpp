#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

bool isUnable(int unknown, int position)
{
	return (unknown < position );
}

ll dp[12];

int fact(int n)
{
	if(n == 0 || n == 1)
		return dp[n] = 1;
	return dp[n] = n * fact(n-1);
}

ll calc(int unknown, int position)
{
	int steps = (unknown - position)/2;
	return fact(unknown)/(fact(unknown-steps) * fact(steps));
}

int main()
{
	fastio
	string a,b;
	cin >> a >> b;
	int position(0), unknown(0);
	for(int i = 0; i < a.size(); i++)
	{
		a[i] == '+' ? position++ : position--;
		b[i] == '?' ? unknown++ : b[i] == '+' ? position-- : position++;
	}
	
	cout << fixed << setprecision(12);
	position = abs(position);
	if(unknown == 0 && position == 0)
		cout << 1.0 << endl;
	else if(isUnable(unknown, position))
		cout << 0.0 <<endl;
	else {
		ll total = (1<<unknown);
		ll ways = calc(unknown, position);

		cout << ways/(float)total << endl;
	}

	return 0;
}