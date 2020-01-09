#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b ; i++)
#define size(arr) sizeof(arr)/sizeof(arr[0])
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int parent[100];
int ranks[100];

// make set
void make_set(int v)
{
	parent[v] = v;
	ranks[v] = 0;
}

// find set
int find_set(int v)
{
	if( v == parent[v])
		return v;

	return parent[v] = find_set(parent[v]);
}

// union set
void union_set(int a, int b)
{
	a = find_set(a), b = find_set(b);
	if(a != b){
		if(ranks[a] < ranks[b] )
			swap(a,b);
		parent[b] = a;
		if(ranks[a] == ranks[b])
			ranks[a]++;
	}
}

int main()
{
	fastio
	REP(i, 1, 5)
		make_set(i);

	union_set(1, 2);
	union_set(3, 4);
	union_set(2, 4);

	REP(i, 1, 5){
		cout << i << " belongs to " << find_set(i) << '\n';
	}

	return 0;
}