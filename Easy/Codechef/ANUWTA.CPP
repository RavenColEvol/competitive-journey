#include<iostream>
using namespace std;

void solve()
{
	int n, answer = 0;
	cin >> n;
	cout << (n + 1) * (n + 2) / 2 - 1 << endl;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}