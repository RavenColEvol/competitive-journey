#include<iostream>

using namespace std;

int sum(int n)
{
	if(n/10==0)
		return n;
	
	int total = 0;
	while(n)
	{
		total += n % 10;
		n /= 10;
	}

	return sum(total);
}

int main()
{
	cout << sum(1234);
	return 0;
}