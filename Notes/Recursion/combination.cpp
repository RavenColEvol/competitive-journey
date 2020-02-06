#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i <= b ; i++)
#define arrsize(arr) sizeof(arr)/sizeof(arr[0])
#define first x
#define second y
#define emplace_back eb
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << #x << " is " << x << endl;

typedef long long ll;

using namespace std;

int elements(map<int, int> arr);

int main()
{
	fastio
	int t ; cin >> t ;

	while(t--)
	{
		int n ; cin >> n ;
		map<int, int> arr ;

		REP(i, 1, 2 * n)
		{
			int temp ; cin >> temp ;
			arr[temp]++;
		}

		cout << elements(arr) << endl;
	}

	return 0 ;
}


int elements(map<int, int> arr)
{
	vector<int> vi;

	for(auto i : arr)
	{
		int res = ways(vi, i.x);
		if(res < i.y)
		{
			REP(j, 0, i.y - 1 - res)
				vi.eb(i.x);
		}
	}

	return vi.size();
}