#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

ll lcm(ll a, ll b)
{
	return (a*b)/ __gcd(a,b);
}

int main()
{
	ll n, ans;
	cin >> n;
	for(int i =  sqrt(n); i >= 1 ; i--)
	{
		if( n % i == 0 && lcm(i, n/i) == n ){
			ans = i;
			break;
		}
	}
	cout << ans << ' ' << n/ans << endl;
	return 0;
}