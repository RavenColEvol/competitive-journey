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
		for(int i = n ; i>=0; i--)
			cout << (char)('a' + (i % 26));
		cout << endl;
	}
	return 0;
}