#include<iostream>

using namespace std;

int main()
{
	int n = 54;
	while(n%2==0)
	{
		cout << 2 << endl;
		n /= 2;
	}
	for(int i = 3; i*i<=n; i+=2 )
	{
		while(n%i==0)
		{
			cout << i << endl;
			n /= i;
		}
	}

	if(n>1)
		cout << n << endl;
	return 0;
}