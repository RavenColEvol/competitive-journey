#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define PB(i) push_back(i)
typedef long long ll;

using namespace std;

int main()
{
	fastio
	vector<int> vi;
	int temp;
	while(cin >> temp)
	{
		vi.PB(temp);
	}
	long long answer = 0;
	for(int i = 0,j=0; j < vi.size(); i++)
	{
		answer += *max_element(vi.begin() + i, vi.begin() + j);
		i = j + 1;
		j = 
	}
	return 0;
}