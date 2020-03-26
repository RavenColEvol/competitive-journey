#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int main()
{
	fastio
	
	int n ; cin >> n ;
	map<int,int> f,l;
	REP(i,0,n) {
		int temp; cin >> temp;
		if(f.find(temp) != f.end()) {
			l[temp] = i;
		}
		else {
			f[temp] = i;
		}
	}

	

	return 0;
}