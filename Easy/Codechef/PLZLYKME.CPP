#include<bits/stdc++.h>
#define REP(i,a,b) for(ll i = a; i <= b ; i++)
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
		ll l, d, s, c;
		cin >> l >> d >> s >> c;
		
		REP(i, 1, d-1) {
			s = s + s*c;
			if(s >= l)
				break;
		}

		if(s < l)
			cout << "DEAD AND ROTTING\n";
		else
			cout << "ALIVE AND KICKING\n";
			
		
	}

	return 0;
}