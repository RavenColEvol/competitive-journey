#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t ; 
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		
		if(n % 4 == 1)
			cout << "ALICE" << '\n';
		else
			cout << "BOB" << '\n';
	}

	return 0;
}