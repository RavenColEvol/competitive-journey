#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

deque<int> q;

void pm()
{
	cout << q.front() << endl;
}

void add(int n)
{
	while(!q.empty() && q.back() > n)
		q.pop_back();
	q.push_back(n);
}

void remove()
{
	if(!q.empty())
		q.pop_front();

}

int main()
{
	fastio
	
	return 0;
}