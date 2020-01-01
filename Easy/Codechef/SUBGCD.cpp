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
		vector<int> arr(n);
		for(int& i:arr)
		{
			cin >> i;
		}
		int temp ;
		REP(i,0, n-1)
			temp = (i==0)?arr[0]:__gcd(arr[i],temp);

		cout << (temp == 1 ? n : -1) << '\n';
	}
	return 0;
}