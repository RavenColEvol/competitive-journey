#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 27;
	vector<int> factors;

	for(int i = 2; i*i <= n ; i++)
	{
		while(n%i==0)
		{
			factors.push_back(i);
			n /= i;
		}
	}

	if(n>1)
		factors.push_back(n);

	for(int i : factors)
		cout << i << endl;

	return 0;
}