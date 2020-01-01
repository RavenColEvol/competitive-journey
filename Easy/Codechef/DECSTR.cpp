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
		int full = n / 26;
		while(full--)
		{
			for(int i = 25; i >= 0; i--)
				cout << (char)('a' + i);
		}
		cout << endl;
	}
	return 0;
}