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
	while(t--)
	{
		string s;
		bool flag = false;
		cin >> s;
		if(s.find("101")!= string::npos) cout << "Good\n";
		else if(s.find("010")!= string::npos) cout << "Good\n";
		else cout << "Bad\n";
	}
	return 0;
}