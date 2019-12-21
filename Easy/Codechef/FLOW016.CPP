#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

/**
	Easy
	Purpose: Find GCD and LCM
	
	@author Ravi Lamkoti
*/

using namespace std;

ll gcd(ll a, ll b)
{
	return b ? gcd(b , a % b) : a;
}

ll lcm(ll a, ll b)
{
	return (a*b)/gcd(a, b);
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	// Your Code Goes Here
	ll t; 
	cin >> t;
	test {
		ll a, b ;
		cin >> a >> b;
		cout << gcd(a, b) << ' ' << lcm(a, b) << '\n';
	}

	return 0;
}