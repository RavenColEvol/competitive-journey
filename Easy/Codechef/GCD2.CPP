#include<iostream>
#define MOD 1000000007
#define ulli unsigned long long int

using namespace std;

int main()
{
	ulli a;
	string b;

	cin >> a >> b;

	if( a == 0 ) cout << b << '\n';

	else {
		ulli mod = 0;

		for( ulli i = 0; i < b.size() ; i++)
		{
			mod = mod*10 + (ulli)( b[i] - '0');
			mod = mod % a ;
		}

		cout << __gcd(a, mod) << '\n';
	}

	return 0;
}