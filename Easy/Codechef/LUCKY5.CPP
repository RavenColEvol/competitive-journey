#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string n;
		long long count = 0;
		cin >> n;
		for(char c:n)
		{
			if(c == '4' || c == '7')
				count++;
		}
		cout << n.size() - count << '\n';
	}
	return 0;
}