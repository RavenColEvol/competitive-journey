#include<iostream>
using namespace std;

int main()
{
	int t ;
	cin >> t;

	while(t--)
	{
		int n, a ,b ;
		cin >> n >> a >> b;
		int set_bits = __builtin_popcount(a) + __builtin_popcount(b);
		int x = ((1<<n) - 1);
		int y = ((1<<(abs(n-set_bits))) - 1);
		cout << (x ^ y) << endl;
	}

	return 0;
}