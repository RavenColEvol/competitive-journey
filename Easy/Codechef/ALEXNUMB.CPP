#include<iostream>
using namespace std;

int main()
{
	int t, n, temp;
	cin >> t;
	while(t--)
	{
		cin >> n;
		// just for input
		for(int i = 0;i<n;i++) cin >> temp;

		cout << (n * (n-1)) / 2 << endl;
	}
	return 0;
}