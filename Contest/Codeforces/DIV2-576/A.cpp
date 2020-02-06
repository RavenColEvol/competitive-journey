#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int n, ans = 1;
	cin >> n;
	for(int i = 2; i <= n; i++)
	{
		ans += 4*(i-1);
	}
	cout << ans ;
	return 0;
}