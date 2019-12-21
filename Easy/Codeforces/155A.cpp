#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	ll n; 
	cin >> n;

	ll max, min;
	cin >> max;
	min = max;

	ll count = 0;

	for(int i = 0; i < n-1; i++)
	{
		ll temp;
		cin >> temp;
		if( temp > max )
			count++, max = temp;
		else if( temp < min )
			count++, min = temp;
	}

	cout << count ;

	return 0;
}