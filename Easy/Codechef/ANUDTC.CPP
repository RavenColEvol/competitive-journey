#include<iostream>
using namespace std;

int main()
{
	int t ;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
			
		360 % n == 0 ? cout << 'y' << ' ' : cout << 'n' << ' ';
		360 >= n ? cout << 'y' << ' ' : cout << 'n' << ' ';
		360 >= (n*(n-1))/2 ? cout << 'y' << ' ' : cout << 'n' << ' ';
	}
	return 0;
}