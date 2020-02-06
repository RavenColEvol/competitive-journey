#include<iostream>
using namespace std;

int main()
{
	long long n; cin >> n;
	long long arr[n+9];
	for(int i = 1; i <= n; i++)
		cin >> arr[i];
	long long ans = 0;
	for(int i = 1; i <= n; i++)
	{
		long long count = 0;
		long long x = arr[i];
		while(x != -1)
		{
			x = arr[x];
			count++;
		}
		ans = ans>count?ans:count;
	}
	cout << ans + 1 << endl;
	return 0;
}