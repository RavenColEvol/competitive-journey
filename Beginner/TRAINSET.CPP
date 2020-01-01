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
		int n;
		cin >> n;

		map<string, vector<int> > m;
		while(n--){
			string s;
			bool status;
			cin >> s >> status;
			if(m.find(s) == m.end())
			{
				vector<int> vi(2,0);
				vi[status]++;
				m[s] = vi;
			}
			else {
				auto i = m.find(s);
				i->second[status]++;
			}
		}
		int answer = 0;
		for(auto i: m)
		{
			answer += max(i.second[0],i.second[1]);
		}
		cout << answer << '\n';
	}
	
	return 0;
}