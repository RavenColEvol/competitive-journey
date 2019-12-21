#include<iostream>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long int c, k ;
		cin >> c >> k;
		if( k != 0 )
		cout << c/k << ' ' << c%k << '\n';
		else
			cout << 0 << ' ' << c << '\n';
	}
	return 0;
}