#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define fastio ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

using namespace std;

stack<pair<int, int>> st;

void add(int new_elem)
{
	int new_min = st.empty() ? new_elem : min(new_elem,st.top().second);
	st.push({new_elem, new_min});
}

void remove()
{
	int removed = st.top().first;
	st.pop();
	cout << removed;
}

void pm()
{
	cout << st.top().second << endl;
}

int main()
{
	fastio
	
	add(15);
	add(13);
	add(19);
	pm();
	add(10);
	pm();
	remove();
	pm();
	return 0;
}