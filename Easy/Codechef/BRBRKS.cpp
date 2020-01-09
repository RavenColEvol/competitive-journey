#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define size(arr) sizeof(arr)/sizeof(arr[0])
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int main()
{
	fastio
	int t;
	cin >> t;
	while(t--)
	{
		int s, w1, w2, w3;
		cin >> s >> w1 >> w2 >> w3;
		int k = w1 + w2 + w3;

		if(k <= s)
			cout << 1 << endl;
		else if( (w1 + w2) <= s || (w2 + w3) <= s)
			cout << 2 << endl;
		else 
			cout << 3 << endl;
		
	}
	return 0;
}