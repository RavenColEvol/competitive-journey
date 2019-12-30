#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{
	fastio
	int n;
	cin >> n;
	int z, m , o;
	z = 0, m = 0, o = 0;
	ll work = 0;
	while(n--)
	{
		int val;
		cin >> val;
		if(val < 0){
			work += abs(val) - 1;
			m += 1;
		}
		else if(val > 0) {
			work += val - 1;
			o += 1;
		}
		else 
			z += 1;
	}

	if(z > 0 || m % 2 == 0)
	{
		work += z;
		cout << work << endl;
	}
	else 
	{
		work +=2 ;
		cout << work << endl;
	}

	return 0;
}