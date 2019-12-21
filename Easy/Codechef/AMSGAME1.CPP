#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		int n , ans;
		cin >> n >> ans;
		for( int i = 1; i < n; i++ )
		{
			int temp ;
			cin >> temp;
			ans = __gcd(temp, ans);
		}
		cout << ans << '\n';
	}

	return 0;
}