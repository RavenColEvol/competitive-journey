#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t ;
	cin >> t;
	while(t--)
	{
		int len ;
		set<int> s;
		cin >> len ;
		for(int i = 0 ; i < len ; i++) {
			int temp ; 
			cin >> temp;
			s.insert(temp);
		}

		cout << s.size() << endl;
	}

	return 0;
}