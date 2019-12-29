#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a, i <= b ; i++)
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
		int a, b, c, r ;
		cin >> a >> b >> c >> r;
		if(b<a){
			swap(a,b);
		}
		int upper_limit , lower_limit;
		upper_limit = c + r;
		lower_limit = c - r;
		if(upper_limit <= a || lower_limit >= b){
			cout << b - a << endl;
		}
		else {
			upper_limit = c+r >= b ?  b : c + r;
			lower_limit = c-r <= a ?  a : c - r;
			cout << ( b - a - (upper_limit - lower_limit) ) << endl;
		}
	}

	return 0;
}