#include<iostream>
using namespace std;

int main()
{
	int t ;
	cin >> t;

	while(t--)
	{
		int n, a, b;
		cin >> n >> a >> b;
		int zeros[2]={0} , ones[2]={0};
		for(int i = 0; i < n && a > 0; i++)
		{
			a&1 ? ones[0]++ : zeros[0]++;
			a >>= 1;
		}
		for(int i = 0; i < n && b > 0; i++)
		{
			b&1 ? ones[1]++ : zeros[1]++;
			b >>= 1;
		}
		
		if(zeros[0] == ones[1] )
			cout << (2<<n-1) << endl;
		else
		{
			int val = ones[0]+2*zeros[0]-ones[1];
			cout << (2<<val - ) << endl;
		}

	}

	return 0;
}